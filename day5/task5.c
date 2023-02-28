/* lvalue =lvalue=expression  
*/
#include<stdio.h>
int mian()
{
    int a,b=3,c=4;
    a = b+(c*=4);
    printf("value of %d",a);
    printf("value of %d",b);
    printf("value of %d",c);
     
}
