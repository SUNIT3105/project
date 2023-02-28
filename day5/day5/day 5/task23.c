#include<stdio.h>
#define N 10
int main(){
    float sum=0, average,number;
    int count=0;
    printf("\n enter the number");
    scanf("%f",&number);
    while(count<N)
    {
        sum=sum +number;
        count=count+1;
    }
    average=sum/N;
    printf("n=%d sum=%d",N,sum);
    printf("average=%f",average);
    return 0;
}