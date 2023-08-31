#include<stdio.h>
#include<math.h>
main()
{
    int num,j,tag,m,cnt=0;
    for(num=101;num<200;num+=2)
    {
        tag=1;
        m=sqrt(num);
        for ( j = 2; j <= m; j++)
        {
            if(num%j==0)
            {
                tag=0;
                break;
            }
        }
        if(tag==1)
        {
            printf("%5d",num);
            cnt++;
            if(cnt%12==0)
                putchar('\n');
        }
        
    }
}