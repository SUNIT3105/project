
//bitwise operator
#include <stdio.h>
int main()
{

 int a = 9, b = 5;
 printf("a = %d, b = %d\n", a, b);
 printf("bitwise AND a&b = %d\n", a & b);
 printf("bitwise OR a|b = %d\n", a | b);
 printf("bitwise exclusive ORa^b = %d\n", a ^ b);
 printf("bitwise compliment ~a = %d\n", a = ~a);
 printf("shift left b<<3 = %d\n", b << 3);
 printf("shift right b>>2 = %d\n", b >> 2);
 return 0;
}