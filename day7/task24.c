#include<stdio.h>
int main()
{
    int num,a,count=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        a=num%10;
        count++;
    }
    printf("digit of anumber %d",count);
}