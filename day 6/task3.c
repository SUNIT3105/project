#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the vlue of a |n");
    scanf("%d",&a);
    printf("binary form of anumber ");
    for(i=7;i>=0;i--)
    {
        j=(a>>3)&0x1;
    }
    printf("enter the 3 bit");
    printf("%d",j);
    if(j==1)
    {
        printf("led is on");
    }
    else
    {
        printf("led is off");
    }
}
