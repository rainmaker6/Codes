#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int x=__gcd(a,b);
    int nt=0;
    for(int i=1;i*i<=x;++i) {
        if(x%i==0) {
            if(x/i==i) ++nt;
            else nt+=2;
            }
        }
        cout<<nt<<'\n';
    return 0;
    }