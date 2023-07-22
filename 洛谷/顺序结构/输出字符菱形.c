#include<stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int k=1;k<=3-i;k++)
        putchar(' ');
        for(int j=1;j<=2*i-1;j++)
            putchar('*');
        putchar('\n');
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=i;j++) //i=1,j=3
            putchar(' ');      //i=2,j=1
        for(int k=1;k<=-2*i+5;k++)
            putchar('*');
        putchar('\n');
    }
    
    return 0;
}