#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d %c",&n,&ch);
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n;j++)
            printf("%c",ch);
        printf("\n");
    }
    return 0;
}
