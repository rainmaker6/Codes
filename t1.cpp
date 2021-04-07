//Meta Template for qsort
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
T Quicksort(T [], int, int);

template <class T>
T partition(T [], int, int);
int main()
{
const int n = 10;
int a[n] = {103, 325, 73, 251, 869, 710, 1848, 9983, 303, 259};
for (int i = 0; i < n; ++i) cout << a[i] << " ";
cout << '\n';
Quicksort(a, 0, n-1);
for (int i = 0; i < n; i++)
cout << a[i] << " ";
cout << '\n';

return 0;
}

template<class T> T Quicksort(T a[], int l, int r)
{
if (l < r)
{
int p = partition(a, l, r);
//recursive calls
Quicksort(a, l, p - 1);
Quicksort(a, p + 1, r);
}
return 0;  
}

template<class T> T partition(T a[], int l, int r)
{
T pivotValue = a[l];
T pivotPosition = l;
for (int i = l + 1; i <= r; ++i)
{
if (a[i] < pivotValue)
{
swap(a[pivotPosition + 1], a[i]);  
swap(a[pivotPosition], a[pivotPosition + 1]);
pivotPosition ++;
}
}
return pivotPosition;
}
