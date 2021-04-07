#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> parent, r;
class Edge{
    public:
    int u, v, weight;
    bool operator<(Edge const& other){
        return weight<other.weight;
    }
};
void make_set(int v){
    parent[v]=v;
    r[v]=0;
}
int find_set(int v){
    if(v==parent[v]) return v;
    return parent[v]=find_set(parent[v]);
}
void union_set(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(r[a]<r[b]){
            swap(a,b);
        }
        parent[a]=b;
        if(r[a]==r[b]) r[a]++;
    }
}
int main(){
    int n;
    vector<Edge> edges;
    int cost=0;
    vector<Edge> result;
    scanf("%d", &n);
    parent.resize(n); r.resize(n);
    for(int i=0;i<n;++i){
        make_set(i);
    }
    sort(edges.begin(),edges.end());
    for(Edge e:edges){
        if(find_set(e.u)!=find_set(e.v)){
            cost+=e.weight;
            result.push_back(e);
            union_set(e.u,e.v);
        }
    }
    return 0;
}
