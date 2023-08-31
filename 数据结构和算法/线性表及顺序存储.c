#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5
typedef struct 
{   
    int age;
    int height;
    float weight;
}Student;

typedef struct 
{
    Student *stu;
    int lenght;
    int listszie;
}Sqlist;

int initlist(Sqlist *L)
{
    L->stu=(Student *)malloc( MAXSIZE*sizeof(Student));
    if(!L->stu)
    exit(EXIT_SUCCESS);
    L->lenght=0;          
    L->listszie=MAXSIZE;
    return 1;
}
int DeleteList(Sqlist *L)
{   
    if(L->stu==NULL)
    return 0;
    free(L->stu);
    L->lenght=0;
    L->listszie=0;
    return 1;
}
void FindallList( Sqlist const *L)
{
    for(int i=0;i<L->lenght;i++)
    {
        printf("%d\t,%d\t,%f\t",L->stu[i].age,L->stu[i].height,L->stu[i].weight);
    }
    printf("\n");
}
int main()
{
    Sqlist L;
    initlist(&L);
    for(int i=0;i<L.listszie;i++)
    {
        printf("请输入年龄，身高，体重：");
        scanf("%d%d%f",&L.stu[i].age,&L.stu[i].height,&L.stu[i].weight);
        L.lenght++;
    }
    FindallList(&L);
    DeleteList(&L);
    return 0;
}