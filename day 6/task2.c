#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the vlue of a |n");
    scanf("%d",&a);
    printf("binary form of anumber ");
    for(i=7;i>=0;i--)
    {
        j=(a>>i)&0x1;
         printf(" position %d \n",i);
         printf(" binary value %d \n",j);
    }
}