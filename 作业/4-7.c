#include<stdio.h>
#define PI 3.14
main()
{
    int r;
    float h;
    double v;
    printf("请输入圆柱体的高:");
    scanf("%f",&h);
    for (r = 1; r<=10; r++)
    {
        v=PI*r*r*h;
        if (v>100.0)
        {
            break;
        }
        printf("半径等于%d,体积等于%.2f  \n",r,v);
        
    }
    printf("此时r=%d\n",r);
    
}