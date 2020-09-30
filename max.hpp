#ifndef ALGORITHM
#define ALGORITHM

#include<algorithm>

template<typename S>
S max2(S a,S b)
{
return a>b ? a:b;
}
template<typename S>
S min2(S a,S b)
{
return a>b ? b:a;
}
template<typename S>
S max3(S a,S b,S c)
{
return (a>b && a>c) ? a:(b>c && b>a ? b:c);
}
template<typename S>
S min3(S a,S b,S c)
{
return (a<b && a<c) ? a:(b<a && b<c ? b:c);
}

