#include<stdio.h>
#include<string.h>
void search(char *p,char *t) {
    int m=strlen(p);
    int n=strlen(t);
    int j=0;
    for(int i=0;i<=n-m;++i) {
        j=0;
        for(j=0;j<m;++j) {
            if(p[j]!=t[i+j]) break;
            }
            if(j==m) {
            printf("Pattern Found at index:%d",i);
            }
        }
    }
int main() {
    char text[]="AAAAAAAAAAAAHFAOHGF";
    char pattern[]="HFAOH";
    search(pattern,text);
    return 0;
    }