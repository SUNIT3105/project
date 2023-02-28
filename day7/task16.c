//sum of natural number
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter the number\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("sum of natural number %d",sum);
}