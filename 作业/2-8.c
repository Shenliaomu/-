#include<stdio.h>
main()
{
    int a=1234,b=01234,c=0x1234;
    printf("a=%d,b=%o,c=x\n",a,b,c);
    printf("a=0%o,b=%d,c=%d\n",a,b,c);

}