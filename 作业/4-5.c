#include<stdio.h>
main()
{
    int n;
    long t=1;
    printf("输入若干个整数直到输入0为止\n");
    scanf("%d",&n);
    while (n!=0)
    {
       t*=n;
       scanf("%d",&n);
    }
    printf("%d\n",t);
    
}