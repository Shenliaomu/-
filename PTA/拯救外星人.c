#include<stdio.h>
int main()
{
    int a,b,sum=1,cnt,i;
    scanf("%d%d",&a,&b);
    cnt=a+b;
    for(i=1;i<=cnt;i++)
    {
        sum*=i;
    }
    printf("%d\n",sum);
    return 0;
}