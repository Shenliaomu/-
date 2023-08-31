#include<stdio.h>
main()
{
    int score;
    printf("输入一个成绩：");
    scanf("%d",&score);
    if (score>=60)
    {
        printf("通过\n");
    }
    else 
        printf("未通过，继续努力");

}