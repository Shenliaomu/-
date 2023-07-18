#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&n,&m);
    double sale;
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&sale);
        if(sale<m)
        printf("On sale! %.1f\n",sale);
    }
    return 0;
}