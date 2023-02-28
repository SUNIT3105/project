//fibonacci series
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n;
    printf("\n enter the value of n");
    scanf("%d",&n);
    while(n1<n)
    {
        printf("\n enter the result %d",n3);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}