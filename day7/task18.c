#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf(" multiplication of a number %dx%d=%d \n ",num,i,num*i);
    }
}