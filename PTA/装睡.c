#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int n;
    int pulse=0,brath=0;
    char name[3];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s %d %d\n",name,&brath,&pulse);
    
        bool m=brath>=15&&brath<=20&&pulse>=50&&pulse<=70;
       if(!m){
        printf("%s\nN",name);
       } 
    }
}