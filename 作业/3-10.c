#include<stdio.h>
main()
{
    int bool;
    float x,y,z;
    printf("请输入x，y；");
    scanf("%f%f",&x,&y);
    z=x*x+y*y;
    bool=(z>=1)&&(z<=4);
    if(bool)
        printf("TURE\n");
    else    
        printf("FALSE\n");
}