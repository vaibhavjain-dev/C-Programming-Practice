/*
Day 4 of C programming & Lec 7 
Decision Control Statements
*/

// Program 1: To swap the values of two int type variables.

#include <stdio.h>

int main() {
    int a = 10, b = 20, c;

    // Swapping values
    c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d\n", a, b);
}

////////////////////////////////////////////////////////////////////////////////////////////

// Decision Control Instruction

// Program to check whether the given number is Positive or Non-Positive

// Way 1
#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("Positive Number\n");
    }
    if (x <= 0) {
        printf("Non-Positive\n");
    }
}

// Way 2: Using if-else
#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("Positive Number\n");
    } else {
        printf("Non-Positive\n");
    }
}

// Way 3: Conditional Operator (Ternary Operator)
#include <stdio.h>
#include <conio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    // Using the ternary operator
    x > 0 ? printf("Positive\n") : printf("Non-Positive\n"); // Type 1 of writing
    printf("%s\n", (x > 0) ? "Positive" : "Non-Positive");   // Type 2 of writing

    getch(); 
    return 0;
}