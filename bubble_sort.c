#include <stdio.h>
void swap(int *p, int *q)
{
int temp=*p;
*p=*q;
*q=temp;
}
void Bubble(int a[], int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0; j<n-i-1; j++)
{
if(a[j]>a[j+1])
swap(&a[j], &a[j+1]);
}
}
}

void printlist(int a[], int n)
{
for(int i=0;i<n;i++)
{
printf("\n elements is at index %d = %d", i, a[i]);
}
}
int main()
{
int a[]={23, 10, 15, 1, 12};
int n=sizeof(a)/sizeof(a[0]);
Bubble(a, n);
printf("\nHello, World!\n");
printlist(a, n);
return 0;
}