#include<stdio.h>
int main()
{
    double t;
    int n;
    scanf("%lf %d",&t,&n);
    t/=1.0*n;
    n*=2;
    printf("%.3lf\n%d\n",t,n);
    return 0;
}