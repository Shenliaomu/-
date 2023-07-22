#include<stdio.h>
int main()
{
    int n=0,sum,page,i,m;
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {
        if((i*(1+i)/2)>=n)
        {
            sum=i*(i+1)/2;
            m=i;
            break;
        }
       
    }
    page=sum-n;

    
    printf("一共有%d页,被撕掉的页码原本是第%d页\n",m,page);
    return 0;
}