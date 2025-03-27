/*
Day 7 of C programming 
*/

// Iterative Control Instruction OR Loop
/*
1. While
2. Do While
3. For 
*/

// Program to print "Like Now" five times on the screen.

#include <stdio.h>
#include <conio.h>

int main() {
    int x = 1; // Initialize counter

    // Loop to print "Like Now" five times
    while (x <= 5) {
        printf("Like Now\n"); // Print the message
        x++; // Increment counter
    }

    getch(); // Wait for a key press
    return 0; // Return success
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to demonstrate a while loop with two variables

#include <stdio.h>
#include <conio.h>

int main() {
    int x = 3, y = 4;

    // Loop to perform calculations until x is no longer less than y
    while (x < y) {
        printf("%d\n", x + y); // Print the sum of x and y
        y = y - x; // Update y
        x = y + x; // Update x (fixed the update logic)
    }
    getch(); // Wait for a key press
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to print first 10 natural numbers

#include <stdio.h>
#include <conio.h>

int main() {
    int i = 1; // Initialize counter

    // Loop to print numbers from 1 to 10
    while (i <= 10) {
        printf("%d\n", i); // Print the current number
        i++; // Increment counter
    }

    getch(); // Wait for a key press
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

// Find Output

#include <stdio.h>
#include <conio.h>

int main() {
    int i = 10; // Initialize counter

    // Loop to print numbers from 10 to 1
    while (i) {
        printf("%d\n", i); // Print the current value of i
        i = i - 1; // Decrement i
    }
    getch(); // Wait for a key press
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to print first 10 even natural numbers

#include <stdio.h>
#include <conio.h>

int main() {
    int i = 1; // Initialize counter

    // Loop to print the first 10 even numbers
    while (i <= 10) {
        printf("%d\n", i * 2); // Print the even number
        i++; // Increment counter
    }
    getch(); // Wait for a key press
}

////////////////////////////////////////////////////////////////////////////////////////////

// Find Output

#include <stdio.h>
#include <conio.h>

int main() {
    int i = 1; // Initialize counter

    // Loop to print numbers from 10 to 1
    while (i <= 10) {
        printf("%d\n", 11 - i); // Print the reverse order number
        i++; // Increment counter
    }
    getch(); // Wait for a key press
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to print first N odd natural numbers in reverse order

#include <stdio.h>
#include <conio.h>

int main() {
    int n, i = 1; // Declare variables

    printf("Enter a number: ");
    scanf("%d", &n); // Read user input

    // Loop to print the first N odd numbers in reverse order
    while (i <= n) {
        printf("%d\n", 2 * n + 1 - 2 * i); // Calculate and print the odd number
        i++; // Increment counter
    }
    getch(); // Wait for a key press
}





