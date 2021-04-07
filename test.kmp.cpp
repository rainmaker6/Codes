#include <iostream>
#include <algorithm>
using namespace std;

int kmp(string s, string p) {
if(s.size()==0||p.size()==0) return -1;

int failure[p.size()];//longest prefix table

fill(failure,failure+p.size(),-1);

for(int r=1, l=-1; r<(int)p.size(); r++) {
    while(l!=-1 && p[l+1]!=p[r]) l=failure[l];
    if(p[l+1]==p[r]) failure[r]=++l;
    }

    //Search pattern
    int t=-1;
    for(int i=0; i<(int)s.size(); i++) {
        while(t!=-1 && s[i] !=p[t+1]) t=failure[t];
        
        if(s[i]==p[t+1]) t++;

        if(t==(int)p.size()-1) return i-t;
    }
    return -1;
}

int main() {

    cout<<kmp("AAAABBBCCCAAAAA","AAAA")<<endl;
//    cout<<kmp("abcd","ab")<<endl;
  //  cout<<kmp("ab","abcd")<<endl;
    //cout<<kmp("ababc","abc")<<endl;

    return 0;
}