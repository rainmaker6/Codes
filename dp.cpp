#include<iostream>
#include<cstring>
using namespace std;
const long long x=1e8;
long long dpb[x];
long long dpt[x];
long long bottom(long long n) {
	if(n==0) return 1;
	if(dpb[n]!=-1) return dpb[n];
	return (dpb[n]=n*bottom(n-1));
}
long long top(long long n) {
	dpt[0]=1;
	for(int i=1;i<=n;++i) dpt[i]=dpt[i-1]*i;
	return dpt[n];
}
int main() {
	memset(dpb,-1,sizeof(dpt));
	long long n;
	cin>>n;
	cout<<bottom(n)<<"\n";
	cout<<top(n)<<"\n";
	return 0;
}