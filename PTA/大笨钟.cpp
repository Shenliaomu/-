#include<iostream>
#include<string>
using namespace std;
int main()
{
    int hour,minter;
    scanf("%d:%d",&hour,&minter);
    if(minter>0){
        if((hour>=0&&hour<=12))
            printf("Only %02d:%02d.  Too early to Dang.",hour,minter);
    else
            hour++;

    }
    for(int i=0;i<hour-12;i++)
    {
        cout<<"Dang";
    }
    cout<<endl;

}