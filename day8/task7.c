#include<stdio.h>
int count()
{
    auto int count=0;
    count++;
    printf("%d",count);
    printf("%d \n",&count);
    
}
int main()
{
    count();
    count();
    count();
    count();
    count();
    return 0;

}
//int count=0;