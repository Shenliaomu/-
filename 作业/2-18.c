#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d;
    double x1,x2;
    a=5;
    b=17;
    c=11;
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%f,   x2=%f\n",x1,x2);

}