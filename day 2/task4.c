#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);
    while (i <= 10) 
    {
        printf("%dx%d = %d \n", num, i, num * i);
        i++;
    }
    return 0;
}