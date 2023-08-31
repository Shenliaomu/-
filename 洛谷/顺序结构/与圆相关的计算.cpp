#include<iostream>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main(void)
{
    float r,d,l,s;
    cin>>r;
    d=2.0*r;
    l=PI*d;
    s=PI*r*r;
    cout<<fixed<<setprecision(4)<<d<<" "<<l<<" "<<s<<endl;
    return 0;
}