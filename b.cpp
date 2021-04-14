#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

void test_case()
{
int n,k;
cin>>n>>k;	
vector<int> a(n),vector<int> b(n);

for(int i=0;i<n;++i)
cin>>a[i];

for(int j=0;j<n;++j)
cin>>b[j];

sort(a.begin(),a.end());
sort(b.begin(),b.end(),greater<int>());

for(int i=0;i<k;++i)
if(b[i]>a[i])
swap(a[i],b[i]);

cout<<accumulate(a.begin(),a.end(),0);//summing up

a.clear();
b.clear();
}
int main()
{
	
//time;
int tc=1;
cin>>tc;
while(tc--)
{
test_case();
}
return 0;
}
