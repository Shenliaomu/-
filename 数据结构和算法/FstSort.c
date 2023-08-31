#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 10
int swap(int *a,int b);
void random(int *arr);
void PrintfP(const int *arr);
int FastSort(int *arr,int lenght);
int main()
{
    int arr[SIZE];
    random(arr);
    PrintfP(arr);
}
void random(int arr[])
{
    srand((int)time(0));
    arr[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        arr[i]=rand()%100;
    }
}
void PrintfP(const int arr[])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%5d",arr[i]);
    }
}
int FastSort(int arr[],int lenght){
    int left=0;
    int right=SIZE-1;
    while(left<right)
    {
        
    }
}