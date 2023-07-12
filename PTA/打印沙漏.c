#include<stdio.h>
int main()
{
	int row,count,lines;
	char ch;
	scanf("%d %c",&lines,&ch);
    for(row=0;((((2*row-1)+1)*row)/2)<=lines;){
        row++;
    }
    count=lines-(row+1)*row/2-2;
        for(int i=row;i>0;i--)
        {
            for(int j=row-i;j>2;j--)
            printf(" ");
            for(int k=1;k<2*i;k++)
            printf("%c",ch);
            printf("\n");
        }
        for(int i=2;i<row;i++)
        {
            for(int j=0;j<row-i;j++)
            {
                printf(" ");
            }
            for(int k=1;k<2*i;k++)
            {
                printf("%c",ch);
            }
            printf("\n");
        }
        printf("%d\n",count);
    return 0;
}
	