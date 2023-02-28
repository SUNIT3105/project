#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the vlue of a |n");
    scanf("%d",&a);
    printf("binary form of anumber ");
    for(i=7;i>=0;i--)
    {
        j=(a>>7)&0x01;
    }
    printf("%d",j);
}