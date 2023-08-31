#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,sum,page,i,m,count;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(!(i*(1+i)/2)>=n)
        continue;
        else{
            sum=i*(i+1)/2;
            m=i;
            break;
        }
       
    }
    page=sum-n;
    count=(page+1)/2;
    page=page-count;
    printf("一共有%d页,被撕掉的页码原本是第%d和%d页\n",m,page,count);
    return 0;
}
