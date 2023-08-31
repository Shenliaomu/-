#include<stdio.h>
main()
{
    int i,num,sum;
    printf("从键盘输入10个整数: \n");
    sum=0;
    while (i<=10)
    {
        scanf("%d",num);
        sum+=num;
        i++;
    }
    
    // for(i=1;i<=10;i++)
    // {
    //     scanf("%d",sum);
    //     sum+=num;
    // }   
    // printf("这10个整数的和为:%d\n",sum);
}