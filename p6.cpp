#include<stdio.h>
using namespace std;
int main(){
    //istream& in(std::cin);
    //ostream& out(std::cout);
    //ios_base::sync_with_stdio(false);
    //in.tie(NULL);
    int T=1;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        if(n % 4 == 0 || n % 400 == 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
