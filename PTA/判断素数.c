#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(void)
{
    bool isprimer;
    int n;
    int number=0;
    scanf("%d",&n);
    
    for(int j=0;j<n;j++){ 
        scanf("%d",&number);
        isprimer=true;
   
    for(int i=2;i<=sqrt(number);i++)
    {
           isprimer=true;
        
            if(number%i==0)
            {
            isprimer=false;
            break;
            }
        }
         if(isprimer)
            puts("Yes");
        else
            puts("No");
   }
  
}
