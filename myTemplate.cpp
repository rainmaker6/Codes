#include <iostream>
#include <fstream>

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#define pb push_back
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(),(a).end()
#define mp make_pair

using namespace std;

typedef long long int64;
typedef vector<int> vi;
typedef pair<int,int> ii;

class A
{
public:
void solveOne(istream &in,ostream &out) 
{

}
void solve(std::istream &in,std::ostream &out)
{
int tc=1;
//in>>tc;
for(int i=0;i<tc;++i)
{
solveOne(in,out);
}
}

};
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
A a;
std::istream& in(std::cin);
std::ostream& out(std::cout);
a.solve(in,out);
return 0;
}
