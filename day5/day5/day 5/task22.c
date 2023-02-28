#include<stdio.h>
int main()
{
    int year,period;
    float amount,inrate,value;
    printf("input amount,interest rate, and period \n");
    scanf("%f%f%f",&amount,&inrate,&period);
    printf("\n");
    year=1;
    while(year<=period)
    {
        value = amount+inrate*amount;
        printf(" %2d rs %8.2f,year,value");
        amount=value;
        year=year+1;
    }
}