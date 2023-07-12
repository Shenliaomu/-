#include<iostream>
using namespace std;
int main()
{
    int n,odd=0,even=0,num;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        if(num%2==0)
            odd++;
        else
            even++;
    }
    cout<<even<<" "<<odd<<endl;

    return 0;
}