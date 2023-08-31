#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20

int main()
{
    srand((int)time(0));
    int temp=0,n=SIZE;
    int arr[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        arr[i]=rand()%100;
        printf("%5d",arr[i]);
        if((i+1)%5==0&&i!=0)
        {
            printf("\n");
           
        }

    }
    puts("This is part");
    while(n)
    {
        for(int i=0;i<SIZE;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
       for(int i=0;i<SIZE;i++)
    {
        printf("%5d",arr[i]);
        if((i+1)%5==0&&i!=0)
        {
            printf("\n");
           
        }

    }
    
    return 0;
}

