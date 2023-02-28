#include<stdio.h>
int main()
{
    int a=25;
    printf("%d",sizeof(a%5));
    if(a%5==0)
    {
        printf("\nexpression 2");
    }
    else
    {
        printf("expression 0");
    }
}