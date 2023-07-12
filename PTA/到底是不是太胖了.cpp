#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    float height,weight,img;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>height>>weight;
        weight/=2;
        img=(height-100)*0.9;
        if(fabs(weight-img)<img*0.1)
            cout<<"You are wan mei!\n";
        else if(weight>img)
            cout<<"You are tai pang le!\n";
        else
            cout<<"You are tai shou le!\n";

    }
    return 0;
}