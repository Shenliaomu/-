#include<stdio.h>
#include<math.h>
main()
{
    int num,j,tag=1,m;
    printf("请输入一个自然数:");
    scanf("%d",&num);
    m=sqrt(num);
    for(j=2;j<=m;j++)
    {
        if(num%j==0)
        {
            tag=0;
            break;
        }
    }
    if (tag==1)
    {
        printf("%d是素数\n",num);
    }else
        printf("%d不是素数\n",num);
    
}