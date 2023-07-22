#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int i,cnt=0,n,x;
    float count=1.0;
    bool tag,flag;
    double result=.0;
    char ch[51];
    scanf("%s",ch);
    n=strlen(ch);
    if(ch[0]=='-')
        tag=true;
    else
        tag=false;  
    for(i=0;i<n;i++)
    {
        if(ch[i]=='2')
            cnt++;
    }
    x=ch[n-1]-'0';
    if(x%2==0)
         flag=true;
    if(tag){
        if(flag)
            count=1.5*2;
        else
            count=1.5;
    }
    if(tag)
        n--;
    result=1.0*cnt/n*count*100;

    printf("%.2lf%%\n",result);
    return 0;
}