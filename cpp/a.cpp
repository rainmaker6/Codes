#include<iostream>
using namespace std;

int fib(int n)
{
	int m;
	cin>>m;
	return n+m;
}

int main ()
{
	int n = 9;
	cout << fib(n);
	getchar();
	return 0;
}