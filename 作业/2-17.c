#include<stdio.h>
#include<math.h>
#define PI 3.1415926
main()
{
    float x;
    printf("请输入一个角度数：");
    scanf("%f",&x);
    printf("弧度数为：%7.1f\n",sin(x*PI/180));
}