#include<stdio.h>
#include<stdbool.h>
int main()
{
    int stop,pal,age,age1;
    scanf("%d%d%d%d",&stop,&pal,&age,&age1);
    bool a,b,c,d;
    a=age>=stop;
    b=age>=pal;
    c=age1>=stop;
    d=age1>=pal;
    if(b&&!c){
        printf("%d-Y ",age);
        printf("%d-Y\n",age1);
        printf("qing 1 zhao gu hao 2\n");
    }else if(!a&&d){
        printf("%d-Y ",age);
        printf("%d-Y\n",age1);
        printf("qing 2 zhao gu hao 1\n");
    }
    if(a&&c)
    printf("huan ying ru guan\n");
    if(!a&&!b)
    printf("zhang da zai lai ba\n");
    if(a&&!b&&!c)
    printf("1: huan ying ru guan\n");
    else if(!a&&!c)
    printf("2: huan ying ru guan\n");
    return 0;
}