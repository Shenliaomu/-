#include<iostream>
using namespace std;
int main()
{
    int Pa,Pb;
    cin>>Pa>>Pb;
    int A=0,B=0;
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        B++;
        else
        A++;
    }
    if(A==3||Pa>Pb)
        cout<<"The winner is a: "<<Pa<<" + "<<A<<endl;
    else if(B==3||Pb>Pa)
            cout<<"The winner is b: "<<Pb<<" + "<<B<<endl;
    return 0;
}