#include "n_th_smallest.hpp"
#include<iostream>
using namespace std;
int main(){
	int arr[] = {12, 3, 5, 7, 4, 19, 26}; 
	int n = sizeof(arr)/sizeof(arr[0]), k = 3; 
    cout << "K'th smallest element is " << meta_math::n_th_smallest<arr,0,n-1,k>; 
	return 0;
}
