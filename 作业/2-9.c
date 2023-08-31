#include<stdio.h>
main()
{
    float x;
    double y;
    x=1.23456789;
    y=1234.56E7;
    printf("%f        %,1f       %e\n",x,x,x);
    printf("%10.0f,%20e,%20.3e",y,y,y);
}