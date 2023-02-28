/*
the program explains swap operations 
usage operator  - '-','+','*','/','%'
syntax : operand operator operan =a+b
*/
#include<stdio.h>
int main()
{
    int a=10,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" suap %d %d ",a,b);
}