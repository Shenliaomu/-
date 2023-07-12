#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int sum=0;
    int count=1;
    for(int i=1;i<=n;i++)
    {
        
        count*=i;
        sum+=count;
    }
    std::cout<<sum<<std::endl;
}