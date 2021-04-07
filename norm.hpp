#include<string.h>
#include<math.h>
template<typename Scalar, typename String>
Scalar norm(const std::vector<Scalar>& v, const String s="one_norm"){
    Scalar ans=0;
        if(strcmp(s, "one_norm")){
            for(auto i:v){
                ans+=abs(i);
            }
        } 
        if(strcmp(s, "two_norm")){
            for(auto i:v){
                ans+=i*i;
            }
            ans=Scalar(sqrt(ans));
        }
        if(strcmp(s, "inf_norm")){
            for(auto i:v){
                ans=Scalar(-1e9);
                ans=std::max(ans,abs(i));
            }
        }
        if(strcmp(s, "frobenius_norm")){
            for(auto i:v){
                ans+=abs(i*i);
            }
            ans=Scalar(sqrt(ans));
        }
        return ans;
}