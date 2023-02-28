//leaf year
#include<stdio.h>
int main()
{
    int y;
   printf("enter the year");
   scanf("%d",&y);
   if(y%100!=0)
   {
    printf("%d not a leaf year");
   }
   else if(y%400==0)
   {
    printf("%d leaf year");
   }
   else if(y%4==0)
   {
    printf("%d leaf year");
   }
}
