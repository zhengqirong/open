#include <iostream>
#include <string>
#include <stack>
#include <vector>

template <typename T> 
inline T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 

class PP
{
public:
    PP(int id){this->id=id;}
    ~PP()
    {
        printf("PP %u delete",this);
    }
private:
    int id=0;
};

int main()
{
    int k=20;
    int i=15;
    int &j=i;
    int out=Max(k,i);
    std::cout<<&k<<std::endl;
    std::cout<<&i<<std::endl;
    std::cout<<&j<<std::endl;
    std::cout<<out<<std::endl;

    std::cout<< "sizeof(int): "<<sizeof(int) <<std::endl;
    std::cout<< "sizeof(PP): "<<sizeof(PP) <<std::endl;

    std::vector<PP> ppLs;
    PP *tmp=new PP(5);
    std::cout<<"tmp:"<<tmp <<std::endl;
    std::cout<<"sizeof(tmp):" <<sizeof(tmp) <<std::endl;
    ppLs.push_back(*tmp);
    std::cout<<"ppLs[0] address: "<<&ppLs[0]<<std::endl;
    ppLs.pop_back();

    std::vector<PP*> pLs;
    pLs.push_back(tmp);
    std::cout<<"pLs[0]"<<pLs[0]<<std::endl;
    std::cout<<"pLs[0] address"<<&pLs[0]<<std::endl;
    pLs.pop_back();

    std::cout<<"tmp:"<<tmp<<std::endl;


    
    return 0;

}

