/*
Day 8 of C programming
*/

// While Loop Example
#include <stdio.h>

int main() {
    int i = 1; // Initialize counter

    while (i <= 10) {
        printf("%d\n", i); // Print the current number
        i++; // Increment counter
    }

    return 0; // Indicate successful completion
}

// Do-While Loop Example
#include <stdio.h>

int main() {
    int i = 1; // Initialize counter

    do {
        printf("%d\n", i); // Print the current number
        i++; // Increment counter
    } while (i <= 10);

    return 0; // Indicate successful completion
}

// For Loop Example
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i); // Print the current number
    }

    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to calculate the sum of N natural numbers
#include <stdio.h>

int main() {
    int n, s = 0; // Initialize sum to 0
    printf("Enter a Number: ");
    scanf("%d", &n); // Read the number of natural numbers to sum

    for (int i = 1; i <= n; i++) {
        s += i; // Add the current number to the sum
    }

    printf("Sum of the first %d natural numbers is %d\n", n, s); // Print the result
    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Game program: User has to enter an even number to win the game, user will get at most 3 chances
#include <stdio.h>

int main() {
    int x; // Variable to store user input

    for (int i = 1; i <= 3; i++) {
        printf("Enter an even number to win:\n");
        scanf("%d", &x); // Read user input

        if (x % 2 == 0) {
            printf("YOU WON!!!\n");
            break; // Exit the loop if the user wins
        } else if (x == 4) {
            printf("Game Over!\n");
            break; // Exit the loop if the user enters 4
        }
    }

    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Find Output Example
#include <stdio.h>

int main() {
    int x = 5; // Initialize x

    do {
        printf("%d\n", x); // Print the current value of x
        x--; // Decrement x by 1
    } while (x > 4); // Continue the loop while x is greater than 4

    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Find Output Example
#include <stdio.h>
#include <conio.h>

int main() {
    int x = 5; // Initialize x

    do {
        printf("%d", x); // Print the current value of x
        x--; // Decrement x by 1
    } while (x > 4); // Continue the loop while x is greater than 4

    getch(); // Wait for a key press
    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Find Output Example
#include <stdio.h>
#include <conio.h>

int main() {
    int i, j; // Initialize variables

    for (i = 1, j = 10; i < j; i++, j--) {
        if (i == j) {
            break; // Exit the loop if i equals j
        }
        printf("%d", i + j); // Print the sum of i and j
    }

    getch(); // Wait for a key press
    return 0; // Indicate successful completion
}


