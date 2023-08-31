#include<stdio.h>
#include<math.h>
#define PI 3.1415926
main()
{
    float a,b,c,s,alfa;
    double af,s,c;
    printf("输入三角形的两边A，B及其夹角：\n");
    scanf("%f%f%f",&a,&b,&alfa);
    af=alfa*PI/180;
    c=sqrt(a*a+b*b-2*a*b*cos(af));
    s=a*b*sin(af)/2;
    printf("\n第三边C=%1.1f  \n面积S=%.1f\n",c,s);
}