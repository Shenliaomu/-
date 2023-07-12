#include<stdio.h>
int main(void)
{
    int n,number;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d\n",&number);
        int left=number%1000/100+number%100/10+number%10;
        int right=number%10000/1000+number%100000/10000+number/100000;
        if(left==right)
        puts("You are lucky!");
        else
        puts("Wish you good luck.");
    }
}