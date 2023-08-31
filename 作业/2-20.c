#include<stdio.h>
main()
{
    int a,b,c;
    printf("输入一个3位整数：");
    scanf("%d",&a);
    b=a%10;
    printf("%d",b);
    a/=10;
    b=a%10;
    printf("%d",b);
    a/=10;
   // a=12/10=1;
    printf("%d\n",a);
}