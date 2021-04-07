#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n),prefix(n);
    for(auto &i:a) scanf("%d", &i);
    prefix[0]=0;
    for(int i=1;i<n;++i) prefix[i]=prefix[i-1]+a[i];
    for(auto i:prefix) printf("%d ", i);
    printf("\n");
    return 0;
}
