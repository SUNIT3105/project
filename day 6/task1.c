#include<stdio.h>
int main()
{
    int a=16,c,sum=0,temp=1;;
    while(a!=0)
    {
        c=a%2;
        a=a/2;
        sum=sum+c*temp;
        temp=temp*10;
    }
    printf("binary number %d",sum);
    return 0;
}