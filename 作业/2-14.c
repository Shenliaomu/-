#include<stdio.h>
#include<math.h>
main()
{
    float x;
    double y;
    printf("input x:");
    scanf("%f",&x);
    y=sqrt(x);
    printf("sqrt(%-7.2f)=%7.2f  \n",x,y);
}