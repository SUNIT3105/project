//base address of array a is 200
//address of ppointer  p is 1000.
//address of pointer q is 2000.
#include<stdio.h>
int main()
{
    int a[]={8,21,1,3,5,-7,11};
    int *p=&a[2];
    p++;
    printf("%d\n",*p++);
    printf("%d\n",*++p);
}
