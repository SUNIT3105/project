//project on scientific calcuLator
#include <stdio.h>//define the libraray
#include <math.h>
//#include<math.h>
#include"arith.h"
#define PI 3.14159265//define the value of pi
int main()
{
    int n;
    float x,y,answer;//declaring the varible inside the main
    printf("\n\n-------SCIENTIFIC CALCULATOR---------\n\n");
    printf("\nenter your choice\n");
    printf("\n1.add 2.sub 3.mult 4.div 5.modulo 6.sin 6.cos 7.tan 8.1og10 9.square root. 10.exponent .\n");
    scanf ("%d",&n);
    if (n<14 && n>0)
    {
        printf("\n value of x and y  ");//accepting the value of x and y 
        scanf("%f%f",&x,&y);
        switch(n) //declaring the switch statement
        {
            case 1:
            printf(" addition %f",add(x,y));
            break;
            case 2:
            printf(" subtraction %f",sub(x,y));
            break;
            case 3:
            printf("multiplication %f",mult(x,y));
            break;
            case 4:
            printf("division %f",div(x,y));
            break;
            case 5:
            printf("modulo=%d",modulo(x,y));
            break;
            case 6:
            printf("sine=%f",sine(x));       
            break;
            case 7:
            printf("cosine=%f",cosine(x));     
            break;
             printf("tangent=%f",tangent(x));     
            break;
            case 9 :
            printf("logten=%f",logten(x));      
            break;
            case 10: 
            printf("squareroot=%f",squareroot(x));
            break; 
            case 11: 
             printf("exponent=%f",exponent(x));    
            break;
        }
    }

}