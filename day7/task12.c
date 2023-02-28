//roots of quadratic equation
# include<stdio.h>
# include<math.h>

int main ()
{
    
   float a,b,c,r1,r2;
   printf (" Enter the values of coefficient: a, b, and c");
   scanf (" %f %f %f", &a, &b, &c);
    float discriminant=b*b-4*a*c,root1,root2;
    if(discriminant>0)
    {
        root1=-b+sqrt(discriminant)/(2*a);
        root1=-b-sqrt(discriminant)/(2*a);
        printf("the roots of the quadratic equation are %f %f",r1,r2);
    }
    else if(discriminant==0)
    {
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("|n the roots of the eaquation %f %f",r1,r2);
    }
    else{
        printf(" the roots of the equation");
    }

} 