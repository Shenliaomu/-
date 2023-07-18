#include<stdio.h>
int main(void)
{
    int sum=0,a,b;
    scanf("%d %d",&a,&b);
    for(int i=a,cnt=0;i<=b;i++)
    {
        printf("%5d",i);
        cnt++;
        if(cnt%5==0)
            printf("\n");
         sum+=i;
    }
    printf("\n");
    printf("Sum = %d\n",sum);
}