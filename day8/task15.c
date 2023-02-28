#include<stdio.h>
int main()
{
    int a=15,b=10,c,d,e,f;
    c=add(a,b);
    d=sub(a,b);
    e=mult(a,b);
    f=div(a,b);
    printf(" add %d\n",c);
    printf(" sub %d\n",d);
    printf(" mult %d\n",e);
    printf(" div %d\n",f);    
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
int sub(int a,int b)
{
    int d;
    d=a-b;
    return(d);
}
int mult(int a,int b)
{
    int e;
    e=a*b;
    return(e);
}
int div(int a,int b)
{
    int f;
    f=a%b;
    return(f);
}

#include<stdio.h>

int main()

{

    int a=15,b=10,c,d,e,f;

    c=add(a,b);

    d=sub(a,b);

    e=mult(a,b);

    f=div(a,b);

    printf(" add %d\n",c);

    printf(" sub %d\n",d);

    printf(" mult %d\n",e);

    printf(" div %d\n",f);    

}

int add(int a,int b)

{

    int c;

    c=a+b;

    return(c);

}

int sub(int a,int b)

{

    int d;

    d=a-b;

    return(d);

}

int mult(int a,int b)

{

    int e;

    e=a*b;

    return(e);

}

int div(int a,int b)

{

    int f;

    f=a%b;

    return(f);

}



 