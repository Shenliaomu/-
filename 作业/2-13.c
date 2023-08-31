#include<stdio.h>
main()
{
    double k,x,y;
    x=(k=9.8)+7;
    printf("k=%5.1f,\tx=%5.1f\n",k,x);
    y=k=9.8+7;
    printf("k=%5.1f,y=%5.1f\n",k,y);
}