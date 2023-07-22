#include<stdio.h>
#include<math.h>
int main()
{
    int s,v;
    int  hours=8,min=60,count;
    double time;
    scanf("%d%d",&s,&v);

    time=s*1.0/v+10;
    if(time>(int)time)
    {
        time++;
    }
    
    if(min-(int)(time)<=60)
    {
        hours-=time/60;
        if(hours<0)
        hours+=24;
    }
    min-=(int)time%60;
    printf("%02d:%02d\n",hours,min);

   
    
    return 0;
}