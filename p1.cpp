#include<stdio.h>
#include<vector>
using namespace std;
const int nax=150123;
vector<vector<int>> edges(nax);
vector<bool> vertices(nax,false);
void dfs(int x,int& edge, int & vertex){ 
    vertices[x]=true;
    ++vertex;
    edge+=(int)edges[x].size();
    for(int i:edges[x])
        if(!vertices[i]) dfs(i, edge, vertex);
}
int main(){
    int n,m;
    scanf("%d %d", &n, &m);    
    for(int i=0;i<m;++i){
        int a, b;
        scanf("%d %d", &a, &b);
        edges[a].push_back(b);//bi-directional edges
        edges[b].push_back(a);
    }
    /*The main observation is that you should print "YES" if the graph is a set of disjoint cliques (in each connected non-clique there is a triple of vertices X,Y,Z that X-Y and Y-Z but not X-Z). To check if each connected component is a clique, you can run dfs and count vertices and edges in the connected component — it's a clique if and only if */
    for(int i=1;i<=n;++i){
        if(!vertices[i]){
            int edge=0, vertex=0;
            dfs(i,edge,vertex);
            if(edge!=(long long) vertex*(vertex-1)){//to check clique
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
