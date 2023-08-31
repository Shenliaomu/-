#include<stdio.h>
main()
{
    int a,b,r,tmp;
    printf("输入两个整数: ");
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    do
    {
        r=a%b;
        a=b;
        b=r;
    } while (r);
    printf("最大公约数为:%d\n",a);
    

}