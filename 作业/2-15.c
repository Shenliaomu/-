#include<stdio.h>
#include<math.h>
main()
{
    float a,b;
    double y;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    y=pow(a,b);
    printf("a=%.1f,b=%.1f,a^b=%.1f\n",a,b,y);
}