// Day 2 of C programming

#include <stdio.h>

// Program 1: Take multiple inputs from keyboard
int main() {
    int a, b;

    // Prompt user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display the input values
    printf("a = %d and b = %d\n", a, b);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program 2: Calculate the sum of 2 numbers
int main() {
    int a, b, c;

    // Prompt user for input
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate the sum
    c = a + b;

    // Display the result
    printf("Sum of %d and %d is %d\n", a, b, c);

    return 0;
}