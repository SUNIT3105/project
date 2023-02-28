#include<stdio.h>
int main()
{
    int a=35,b=25;
    {
        if(a>b)
        {
            printf("swapping of two number");
            a=a+b;
            b=a-b;
            a=a-b;
            printf("\n print %d %d",a,b);
        }
        else
        {
            printf("no swaping of two number");
        }
    }
}