#include<stdio.h>
int main(void)
{
    int n;
    float avreage=0;
    double a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a);
        avreage+=1.0/a;
    }
    printf("%.2f\n",1.0/avreage/1.0*n);
}