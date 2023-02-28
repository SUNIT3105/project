#include<stdio.h>
int fun (  int a)
{
     printf("%d",a);
    
}
int main()
{
    register int a=478,c;
    c=fun(a);
    printf("%d",c);
    printf("%d",&c);
    return 0;

}