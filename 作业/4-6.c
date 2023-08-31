#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<10;i++)
        printf("%5d    ",i);
    printf("\n----------------------------------------------------------------\n");
    for ( i = 1; i < 10; i++)
    {
       for ( j = 0; i < 9; i++)
       {
            printf("%2d*%d=%3d",i,j,i*j);
       }
       putchar('\n');
    }
    
}