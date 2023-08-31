#include<stdio.h>
main()
{
    int a,b,tmp;
    printf("输入两个整数：");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    printf("%d,%d",a,b);
    
}