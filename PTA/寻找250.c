#include<stdio.h>
#include<stdbool.h>
int main(void)
{

    int n=0;
    int count=1;
    bool is;
    do{
        is=scanf("%d",&n);
        if(n!=250)
        count++;
        else
        break;

    }while(is);
    printf("%d\n",count);
    
    }