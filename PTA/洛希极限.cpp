#include<iostream>
#include<iomanip>
#define L 2.445
#define G 1.26
int main()
{
    double p,tag,l;
    double sum=.0;
    std::cin>>p>>tag>>l;
    if(tag==1)
    {
        sum=p*L;
    }
    else
        sum=p*G;
    if(sum<1)
        std::cout<<std::fixed<<std::setprecision(2)<<sum<<" ^_^"<<std::endl;
    else
         std::cout<<std::fixed<<std::setprecision(2)<<sum<<" T_T"<<std::endl;
    return 0;
}