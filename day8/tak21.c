//comma operator
#include<stdio.h>
int main() {
   int a = 50;
   int b = (a++, ++a);
   printf("%d", b);
}