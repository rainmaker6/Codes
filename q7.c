#include <stdio.h>
#include<string.h>
#define d 256
void search(char *pat, char *text, int q )
{
int M=strlen(pat);
int N=strlen(text);
int i,j;
int p=0;
int t=0;
int h=1;
for(i=0; i<M-1; i++)
h=(h*d)%q;
for(i=0; i<M;i++)
{
p=(d*p + pat[i]%q);
t=(d*t + text[i]%q);
}
for(i=0;i<=N-M; i++)
{
if(p==t)
{
for(j=0;j<M;j++)
{
if(text[i+j]!=pat[j]) break;
}
if(j==M) printf("pattern is found at index &=%d", i);
if(i<N-M)
{
t=(d*(t-text[i]*h) +text[i+M])%q; if(t<q) t=t+q;
}
}
}
}
int main()
{
char text[]="AAAAAAAABBAABB";
char pattern[]="AAAB";
// Prime is required
int q=7;
search(pattern, text, q);
//printf("\nHello World");

 return 0;
}