#include<stdio.h>
int main()
{
    float x=1.234567,p=1.0;
    double y=9.876432,q=0.1;
    unsigned k=54321;
    int m=54321;
    long int n=1234567890;
    printf("m=%d\n",m);
    printf("n=%ld\n",n);
    printf("x=%.12lf\n",x);
    printf("x=%f\n",x);
    printf("y=%.12lf\n",y);
    printf("y=%lf\n",y);
    printf("k=%u p= %f q=%.12lf\n",k,p,q);
    return 0;

}