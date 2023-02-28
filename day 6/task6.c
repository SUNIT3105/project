#include<stdio.h>
int main()
{
    int a=4,b=5,c,i,j,d=4;
    c=a|b;
    printf("%d \n",c);
    printf("binary form of anumber ");
    for(i=7;i>=0;i--)
    {
        j=(d>>i)&0x1;
    }
    printf("%d",j);
}