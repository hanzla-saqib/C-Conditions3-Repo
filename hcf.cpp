#include <stdio.h>

int main() {
    int n, m;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &m);

    int d = (n < m) ? n : m; // Initialize d to the smaller of n and m d= 18

    while (d > 0) {//18>0
        if (n % d == 0 && m % d == 0) {
            printf("The greatest common divisor of %d and %d is: %d\n", n, m, d);
            //return 0; // Found the greatest common divisor, exit the program
        }
        d--; // Decrement d if it doesn't divide both n and m evenly
    }

    printf("No common divisor found. Please enter positive integers.\n");
    return 0;
}

