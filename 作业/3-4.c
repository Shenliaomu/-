#include<stdio.h>
main()
{
    char ch;
    printf("输入一个字母字符：");
    scanf("%c",&ch);
    ch=(ch>='A'&&ch<='Z'?ch+12:ch);
    printf("%c\n",ch);
    getchar();
}
