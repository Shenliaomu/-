#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    double p,q;
    scanf("%f%f%f",&a,&b,&c);
    p=1.0/2*(a+b+c);
    q=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf\n",q);

    return 0;
}