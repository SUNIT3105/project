#include<stdio.h>
int main()
{
    int dist, fuel;
    float avg;
    printf("Input the total distance: ");
    scanf("%d", &dist);
    printf("Input total fuel spent in litres: ");
    scanf("%d", &fuel);
    avg = dist / fuel;
    printf("average consumption = %.2f",avg);
    return 0;
}