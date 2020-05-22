#include<bits/stdc++.h>

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
	vi a;vi b;
	sf(n);sf(k);
	rs(a,n);rs(b,n);
	rep(i,0,n)
	{sf(a[i]);}
	rep(i,0,n)
	{sf(b[i]);}
	sort(all(a));
	sort(all(b), greater<int>());
	rep(j,0,k)
	{   if(b[j]>a[j])
		{
			swap(a[j],b[j]);
		   }
		   else continue;
	    }
	pf(accumulate(all(a),0));
	cls(a);cls(b);
	}
int main()
{
	
	time;
	int tc;
	sf(tc);
	while(tc--)
	{
		test_case();
		}
	return 0;
	}
