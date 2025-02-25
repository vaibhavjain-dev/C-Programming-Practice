/*
Day 5 of C programming & Lec 8
*/

////////////////////////////////////////////////////////////////////////////////////////////
// Program to check whether a given number is divisible by 5

#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    // Check if the number is divisible by 5
    if (x % 5 == 0) {
        printf("Divisible by 5\n");
    } else {
        printf("Not Divisible by 5\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
// Program to check whether a given number is even or odd

#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    // Determine if the number is even or odd
    if (x % 2 == 0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
// Program to swap values of two int variables without using a third variable

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Default value of a is %d and b is %d\n", a, b);

    // Swap values using arithmetic operations
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b now holds the original value of a
    a = a - b; // Step 3: a now holds the original value of b

    printf("Swapped value of a is %d and b is %d\n", a, b);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
// Program to find the last digit of a given number

#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number (more than 1 digit): ");
    scanf("%d", &x);

    // Output the last digit of the number
    printf("Last digit of %d is %d\n", x, x % 10);

    return 0;
}

/* Next Topics
   - Nested if and Nested if else
   - if else ladder
*/