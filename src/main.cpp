#include <iostream>
#include "../inc/test.h"

template <typename T>
T mufunc(T argv)
{
    return argv+(T)1.5;
}

int main()
{
    int j=0;
    j=printHello();
    j=2;
    std::cout<<mufunc(j)<<std::endl;
    std::cout<<sizeof(&j)<<std::endl;
    std::cout<<sizeof(int)<<std::endl;
    std::cout<<sizeof(char)<<std::endl;
    std::cout<<sizeof(float)<<std::endl;
    std::cout<<sizeof(double)<<std::endl;
    std::cout<<sizeof(long)<<std::endl;
    std::cout<<sizeof(long long)<<std::endl;
    
    decltype(j) k=567;
    std::cout<<"k="<<k<<std::endl; 
    return 0;
}
