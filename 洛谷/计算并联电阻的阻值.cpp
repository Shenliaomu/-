#include<iostream>
using namespace std;
int main()
{
    float r,r1,r2;
    cin>>r1>>r2;
    r=1.0/(1/r1+1/r2);
    printf("%.2f\n",r);
    return 0;
} 
