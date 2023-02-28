#include<stdio.h>
int main()
{
    int a,b;
    printf("input the first number\n");
    scanf("%d",&a);
    printf("input th second number");
    scanf("%d",&b);
    if(b%a==0)
    {
        printf("multiplied");
    }
    else
    {
        printf("not multiplied");
    }
    return 0;
}