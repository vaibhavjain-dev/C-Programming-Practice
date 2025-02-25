{/*
Day 4 of C programming & Lec 7 
Decision Control Statements
*/

// Program 1: To swap the values of two int type variables.

#include <stdio.h>

int main() {
    int a = 10, b = 20, c; // Initialize two integers and a temporary variable for swapping.

    // Swapping values using a temporary variable
    c = a; // Store the value of a in c
    a = b; // Assign the value of b to a
    b = c; // Assign the original value of a (stored in c) to b

    printf("a = %d, b = %d\n", a, b); // Print the swapped values
}

////////////////////////////////////////////////////////////////////////////////////////////

// Decision Control Instruction

// Program to check whether the given number is Positive or Non-Positive

// Way 1: Using if-else statement
#include <stdio.h>

int main() {
    int x; 

    printf("Enter a Number: "); 
    scanf("%d", &x); 

    // Check if the number is positive or non-positive
    if (x > 0) {
        printf("Positive Number\n");
    } else {
        printf("Non-Positive\n");
    }
}

// Way 2: Using Conditional Operator (Ternary Operator)
#include <stdio.h>
#include <conio.h>

int main() {
    int x; 

    printf("Enter a Number: "); 
    scanf("%d", &x); // Read the input number

    // Using the ternary operator to check if the number is positive
    printf("%s\n", (x > 0) ? "Positive" : "Non-Positive"); 

    getch(); // Wait for a key press
    return 0; 
}

// Way 3: Using Conditional Operator (Ternary Operator) with printf
#include <stdio.h>
#include <conio.h>

int main() {
    int x; 

    printf("Enter a Number: "); 
    scanf("%d", &x); // Read the input number

    // Using the ternary operator directly in printf
    x > 0 ? printf("Positive\n") : printf("Non-Positive\n");

    getch(); // Wait for a key press
    return 0; 
}
