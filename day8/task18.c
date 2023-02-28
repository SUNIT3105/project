 #include <stdio.h>
 int main()
 { 
    int num, c;
    printf("Enter a number: ");
    scanf("%d", &num);
    c = cube(num); 
    printf("Cube is: %d\n", c);
    }
    int cube(int num)
    { 
        return (num* num* num);
    }