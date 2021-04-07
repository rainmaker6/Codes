#include<iostream>
#include<cstring>
using namespace std;
int main() {
int n;
cin>>n;
bool dp[n+1];
memset(dp,true,sizeof(dp));
for(int i=2;i*i<=n;++i) {
    if(dp[i]==true) {
        for(int j=i*i;j<n;j+=i) dp[j]=false;
    }
}
for(int i=2;i<=n;++i) if(dp[i]) cout<<i<<"\n";
}