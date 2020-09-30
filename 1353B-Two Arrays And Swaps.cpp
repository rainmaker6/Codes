#include<iostream>
#include<algorithm>
#include<vector>

#define ll          long long
#define pb          push_back
#define endl        '\n'
#define all(a)      (a).begin(),(a).end()
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define cls(a) a.clear()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rs(a,n) a.resize(n)  
#define time        cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
#define sf(a) scanf("%i",&a)
#define vi vector<int>
#define pf(b) printf("%i\n",b);

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

cout<<accumulate(a.begin(),a.end(),0);

a.clear();
b.clear();
}
int main()
{
	
time;
int tc=1;
ciNn>>tc;
while(tc--)
{
test_case();
}
return 0;
}
