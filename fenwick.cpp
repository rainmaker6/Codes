#include<iostream>
//#include<string>
#include<vector>
using namespace std;
class FenwickTree{
    private:
        vector<int> ft;
        int LSO(int b){
            return (b&(-b));
        }
    public:
        FenwickTree(int n){
            ft.assign(n+1, 0);
        }
        int rsq(int a){
            if(a==0) return 0;
            int sum=0;
            for(; a; a-=LSO(a)) sum+=ft[a];
            return sum;
        }
        int rsq(int a, int b){
            return rsq(b)-rsq(a-1);
        }
        void adjust(int a, int v){
            for(; a<(int)ft.size(); a+=LSO(a)) ft[a]+=v;
        }
};
int main(){
    //https://vj.z180.cn/21dcab793cae93edf907cf198f676317?v=1616457970
    //https://cp-algorithms.com/data_structures/fenwick.html
    vector<int> a;
    int n, x, y, t=1;
    string s;
    while(scanf("%d", &n), n){
        if(t>1) printf("\n");
        printf("Case %d:\n", t++);
        a.assign(n+1, 0);
        FenwickTree ft(n);
        for(int i=1;i<=n;++i){
            scanf("%d", &a[i]);
            ft.adjust(i, a[i]);
        }
        while(cin>>s, s!="END"){
            scanf("%d %d", &x, &y);
            if(s=="S"){
                ft.adjust(x, y-a[x]);
                a[x]=y;
            }
            else printf("%d\n", ft.rsq(x,y));
        }
    }
    return 0;
}
