#include<stdio.h>
int main()
{
    int a=0,b=1,c=-1,d;
    b=(a++,++a,a>>2);
    printf("%d %d",a,b);
}
