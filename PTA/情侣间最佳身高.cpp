#include<iostream>
#include<iomanip>
int main(void)
{
    int n=0;
    float tall,best;
    char ch;
    std::cin>>n;
    for(int i=1;i<=n;i++){
     std::cin>>ch>>tall;
        if(ch=='F')
            best=tall*1.09;
        else
         best=tall/1.09;
    }
    std::cout<<std::fixed<<std::setprecision(2)<<best<<std::endl;
    
}