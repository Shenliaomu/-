#include<stdio.h>
main()
{
    int x,y,z;
    for(x=0;x<=20;++x)
    {
        for (y  = 0; y < 33; y++)
        {
            z=100-x-y;
            if ((z%3==0)&&5*x+3*y+z/3==100)
            {
                printf("公鸡:%-2d   母鸡:%-2d\
                小鸡:%-2d\n",x,y,z);
            }
            
        }
        
    }
}