#include<stdio.h>
main()
{
    char grade;
    printf("请输入成绩等级（A、B、C、D)：");
    grade=getchar();
    switch (grade)
    {
    case 'A':
        case 'B':
            case 'C':
                puts("及格");
                break;
    case 'D':
         puts("不及格");
         break;
    default:
        puts("输入数据错误");
    
    }
    getchar();
}