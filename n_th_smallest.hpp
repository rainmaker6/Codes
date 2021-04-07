//how to declare a function in template
//swap two numbers 
// Software License for MTL
// 
// Copyright (c) 2007 The Trustees of Indiana University.
//               2008 Dresden University of Technology and the Trustees of Indiana University.
//               2010 SimuNova UG (haftungsbeschränkt), www.simunova.com.
// All rights reserved.
// Authors: Shikhar Vashistha
// 
// This file is part of the Matrix Template Library
// 
// See also license.mtl.txt in the distribution.
#ifndef META_MATH_N_TH_SMALLEST
#define META_MATH_N_TH_SMALLEST
#include<climits> 
#include<cstdlib> 
namespace meta_math{
        //int randomPartition(int arr[], int l, int r);
        template<typename T>
		class n_th_smallest{
        T random_partioner(T a[], T l, T r){
			T n=r-l+1;
			T mid=rand()%n;
			swap(&a[l+mid],&a[r]);
			return part(a,l,r);
		}
		T nthSmallest(T a[], T l, T r, T n){
			if(n > 0 && n<=r-l+1){
				T p = random_partioner(a,l,r);
				if(p-l==n-1) return a[p];
				if(p-l>n-1) return nthSmallest(a,l,p-1,n);
				return nthSmallest(a,p+1,r,n-p-l-1);
			}
			return INT_MAX;
		}
		void swap(T x,T y){
			x^=y;
			y=x^y;
			x^=y;
		}
		T part(T a[], T l, T r){
			T x = a[r], i = l; 
			for (T j = l; j <= r - 1; j++){ 
				if (a[j] <= x){
					swap(&a[i], &a[j]); 
					i++; 
				}		 
			} 
			swap(&a[i], &a[r]); 
			return i;
		}
    };
}
