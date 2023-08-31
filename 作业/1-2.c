#include<stdio.h>
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
main()
{
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d\n",c);
    getchar();
}