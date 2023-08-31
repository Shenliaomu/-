#include<stdio.h>
main()
{
    char grade;
    printf("请输入成绩等级（A、B、C、D)：");
    grade=getchar();
    switch (grade)
    {
    case 'A':
        puts("优秀");
        break;
    case 'B':
        puts("良好");
        break;
    case 'C':
        puts("及格");
        break;
    default:
        puts("不及格");
    
    }
    getchar();
}