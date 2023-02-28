#include<stdio.h>
int fun ( static int a)
{
     printf("%f",a);
    
}
int main()
{
     int a=478,c;
    c=fun(a);
    printf("%f",c);
    return 0;

}