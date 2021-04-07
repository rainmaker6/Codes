//:%y+
#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n, l, r, x;
    scanf("%d %d %d %d", &n, &l, &r, &x);
    //ways to choose problemset
    vector<int> a(n);
    for(auto &i:a) scanf("%d", &i);
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[j]>=l && a[j]<=r && abs(a[i]-a[j])>=x) ++cnt;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
