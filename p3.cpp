//:%y+
#include<bits/stdc++.h>
using namespace std;
int main(){
    istream& in(std::cin);
    ostream& out(std::cout);
    ios_base::sync_with_stdio(false);
    in.tie(NULL);
    int T=1;
    //in>>T;
    while(T--){
    	int n,k;
    	in>>n>>k;
    	vector<int> dp(1e6);
    	dp[0]=0;
    	for(int i=1;i<=n;++i){
    		int x;
    		in>>x;
    		dp[i]=dp[i-1]+x;
    	}
    	int ans=-1,mn=1e9;
    	for(int i=0;i<=n-k;++i){
    		if(dp[i+k]-dp[i]<mn){
    			mn=dp[i+k]-dp[i];
    			ans=i;
    		}
    	}
    	out<<ans+1<<'\n';
    }
    return 0;
}
