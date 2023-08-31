#include<stdio.h>
main()
{
    int num,cnt=0;
    for ( num = 50; num <= 100; num++)
    {
        if(num%7==0);
            continue;
        printf("%5d",num);
        cnt++;
        if (cnt%10==0)
        {
            putchar('\n');
        
        }
        putchar('\n');
    }
    
}