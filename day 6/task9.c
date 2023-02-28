#include<stdio.h>
int main()
{
    int a,i,j,b;
    printf("enter the number");
    scanf("%d",&a);
    printf("\n the binary value of a is");
    for(i=7;i>=0;i--)
    {
        j=a<<i & 0x1;
        printf("%d",j); 
    }
    b=~a;
    for(i=7;i>=0;i--)
    {
        j=b<<i & 0x1;
        printf("%d",j); 
    }
    printf("\n deciaml value of %d",b);
    printf("\n binary value of compliment of a");
    return 0;
}