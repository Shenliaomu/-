#include<stdio.h>
int main(void)
{
    int n;
    int sex,tall,weight;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d\n",&sex,&tall,&weight);
          if(sex==0)
          {
              if(tall==129)
                  printf("wan mei! ");
              else if(tall<129)
                  printf("duo chi yu! ");
              else
                  printf("ni li hai! ");
              if(weight==25)
                  printf("wan mei!\n");
              else if(weight<25)
                  printf("duo chi rou!\n");
              else
                  printf("shao chi rou!\n");
          }
        if(sex==1)
        {
             if(tall==130)
                  printf("wan mei! ");
              else if(tall<130)
                  printf("duo chi yu! ");
              else
                  printf("ni li hai!  ");
             if(weight==27)
                  printf("wan mei!\n");
              else if(weight<27)
                  printf("duo chi rou!\n");
              else
                  printf("shao chi rou!\n");
        }
    }
}