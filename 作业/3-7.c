#include<stdio.h>
main()
{
    int a,b,max;
    printf("请输入两个整数：");
    scanf("%d^d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("两个数中较大的为%d",max);   
}