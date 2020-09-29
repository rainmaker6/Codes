/* 
 * Copyright (c) 2020-2021
 */

#ifndef TAPKEE_DEFINES_RANDOM_H_
#define TAPKEE_DEFINES_RANDOM_H_

#include <stdio.h>
#include<chrono>
#include <algorithm>
#include <random>
#include <limits>

namespace tapkee
{

std::mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());//Mersenne Twister generator

inline IndexType uniform_random_index()//faster execution (inline functions)
{
#ifdef CUSTOM_UNIFORM_RANDOM_INDEX_FUNCTION
	return CUSTOM_UNIFORM_RANDOM_INDEX_FUNCTION % std::numeric_limits<IndexType>::max();
#else
	return std::rng();
#endif
}

inline IndexType uniform_random_index_bounded(IndexType upper)
{
	return uniform_random_index() % upper;
}

inline ScalarType uniform_random()
{
#ifdef CUSTOM_UNIFORM_RANDOM_FUNCTION
	return CUSTOM_UNIFORM_RANDOM_FUNCTION;
#else
	return std::rng()/((long double)rng+1);
#endif
}

inline ScalarType gaussian_random()
{
#ifdef CUSTOM_GAUSSIAN_RANDOM_FUNCTION
	return CUSTOM_GAUSSIAN_RANDOM_FUNCTION;
#else
	ScalarType x, y, radius;
	do {
		x = 2*(std::rng()/((long double)rng+1)) - 1;
		y = 2*(std::rng()/((long double)rng+1)) - 1;
		radius = (x * x) + (y * y);
	} while ((radius >= 1.0) || (radius == 0.0));
	radius = std::sqrt(-2 * std::log(radius) / radius);
	x *= radius;
	y *= radius;
	return x;
#endif
}

template <class RAI>
inline void random_shuffle(RAI first, RAI last)
{
	std::random_shuffle(first,last,uniform_random_index_bounded);
}

}

#endif


