#include<stdio.h>
int main()
{
    char arr[11];
    int n,m,k;
    scanf("%d %s %d %d",&n,arr,&m,&k);
    if(k==n)
    {
        printf("mei you mai %s de\n",arr);
    }
    else if(k==m)
    {
        printf("kan dao le mai %s de\n",arr);
    }
    else
        printf("wang le zhao mai %s de\n",arr);
    return 0;
}