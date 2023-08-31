#include<stdio.h>
main()
{
    char ch;
    printf("使用do....while语句\n");
    printf("输入若干字符('*'结束).\n");
    ch=getchar();
    do
    {
        putchar(ch);
        ch=getchar();
    } while (ch!='*');
       
}