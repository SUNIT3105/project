#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("enter the number\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf(" factorial of a number %d",fact);
}