//assignment operator
#include <stdio.h>

main() {

   int a = 9, b=5;
   int c ;

   c =  a;
   printf("Line 1  Value of c = %d\n", c );
   c =a+b;
   printf("Line 2  Value of c = %d\n", c );
   c =a-b;
   printf("Line 3  Value of c = %d\n", c );
   c =a*b;
   printf("Line 4  Value of c = %d\n", c );
   c =a/b;
   printf("Line 5 Value of c = %d\n", c );
   c =a%b;
   printf("Line 6  Value of c = %d\n", c );
}