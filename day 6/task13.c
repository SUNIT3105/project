#include<stdio.h>
int main()
{
    int REG_LED=224,i,j;
    REG_LED=REG_LED&(1<<6);
    printf("binary form of number");
    for(i=7;i>=0;i--)
    {
        j=(REG_LED>>i)&0x1;
        printf("%d",j);
    }
    printf("\n%d",REG_LED);
    return 0;
}