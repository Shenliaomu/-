#include<iostream>
using namespace std;
int main()
{
    float price,discount;
    cin>>price>>discount;
    price*=discount/10.0;
    printf("%.2f\n",price);
    return 0;
}