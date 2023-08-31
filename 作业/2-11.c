#include<stdio.h>
#define PI 3.1415926
main()
{
    float d,r;
    double Len,area;
    printf("请输入直径的值：");
    scanf("%f",&d);
    r=d/2;
    area=PI*r*r;
    Len=2*PI*r;
    printf("半径R=%f，面积S=%f，周长L=%f\n"
    ,r,area,Len);
}