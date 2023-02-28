#include<stdio.h>
int main()
{
    int a=8,b;
    a=(a++,++a,a>>2);
    printf("%d %d",a,b);
}
