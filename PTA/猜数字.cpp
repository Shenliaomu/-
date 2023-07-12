#include<iostream>
#include<time.h>
#include<iomanip>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
    srand(time(0));
    int random=rand()%100+1;
    int n=0;
    cout<<"请输入一个数:";
   
    do{
        cin>>n;
        if(n>random)
        cout<<"猜大了"<<endl;
        else if(n<random)
        cout<<"猜小了"<<endl;
        else
        cout<<"恭喜你，猜对了"<<endl;
    }while(n!=random);
   
    
    return 0;
}
