#include<stdio.h>
main()
{
   char ch;
   printf("请输入一个字符：");
   ch=getchar();
   if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
        printf("%c是英文字母\n",ch);
    else
        printf("%c是其他字符\n",ch);
}