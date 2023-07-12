#include<iostream>
using namespace std;
int main()
{
    int n;
    int t,count=0;
    cin>>n;
    int arr[1001]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        if(arr[t]==0)
        {
            arr[t]=t;
            count++;

        }
    }
    cout<<count<< endl;
    for(int j=0;j<1001;j++)
    {
        if(arr[j]!=0)
        {
            cout<<arr[j]<<" " ;
        }
    }
    cout<<endl;
  return 0;  
} 