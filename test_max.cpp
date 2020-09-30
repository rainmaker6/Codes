#include<iostream>
#include "max.hpp"
//#include<assert.h>
using namespace std;
//assert(x==i);
void solve()
{
int one,two,three;
cin>>one>>two>>three;
cout<<"max value is:"<<::max3(one,two,three)<<"\n";
cout<<"min value is:"<<::min3(one,two,three)<<"\n";
cout<<"max value out of first two numbers is:"<<max2(one,two)<<"\n";
cout<<"min value out of first two numbers is:"<<min2(one,two)<<"\n";
}
int main() 
{
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
//freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);
int tc=1;
//cin>>tc;
//for(int i=1;i<=tc;i++)
while(tc--)
{
//cout<<"Case #"<<i<<": ";
solve();
}
return 0;
}
