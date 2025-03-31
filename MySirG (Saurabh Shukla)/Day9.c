/*
Day 9 of C programming
*/

// Nested Loop 

////////////////////////////////////////////////////////////////////////////////////////////

// Write a program to generate table chart.

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (1 to 10)
    for(i = 1; i <= 10; i++) {
        // Inner loop for columns (1 to 10)
        for(j = 1; j <= 10; j++) {
            printf("%d ", j * i); // Print the product of row and column
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Star Print Patterns
// Pattern 1

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (1 to 4)
    for(i = 1; i <= 4; i++) {
        // Inner loop for columns (1 to 6)
        for(j = 1; j <= 6; j++) {
            printf("* "); // Print a star
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}

// Pattern 2 - Half Triangle 

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (1 to 6)
    for(i = 1; i <= 6; i++) {
        // Inner loop for columns (1 to 6)
        for(j = 1; j <= 6; j++) {
            if(j <= 7 - i) // Condition to print stars
                printf("*"); // Print a star
            else
                printf(" "); // Print space
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}

// Pattern 3 - Half Triangle with custom value of stars

#include <stdio.h>

int main() {
    int i, j, lines;

    printf("Enter number of Stars- ");
    scanf("%d", &lines); // Get number of lines from user

    // Outer loop for rows (1 to lines)
    for(i = 1; i <= lines; i++) {
        // Inner loop for columns (1 to lines)
        for(j = 1; j <= lines; j++) {
            if(j <= lines + 1 - i) // Condition to print stars
                printf("*"); // Print a star
            else
                printf(" "); // Print space
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}

// Pattern 4 - Half Triangle of CHARACTERS with custom value of stars 

#include <stdio.h>

int main() {
    int i, j, lines, k;

    printf("Enter number of Stars- ");
    scanf("%d", &lines); // Get number of lines from user

    // Outer loop for rows (1 to lines)
    for(i = 1; i <= lines; i++) {
        k = 1; // Initialize character counter
        // Inner loop for columns (1 to lines)
        for(j = 1; j <= lines; j++) {
            if(j <= lines + 1 - i) { // Condition to print characters
                printf("%d", k); // Print the current character
                k++; // Increment character counter
            } else
                printf(" "); // Print space
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}

// Pattern 5 - Half Triangle of CHARACTERS with custom value of stars 

#include <stdio.h>

int main() {
    int i, j, lines, k;

    printf("Enter number of Stars- ");
    scanf("%d", &lines); // Get number of lines from user

    // Outer loop for rows (1 to lines)
    for(i = 1; i <= lines; i++) {
        k = 'A'; // Initialize character to 'A'
        // Inner loop for columns (1 to lines)
        for(j = 1; j <= lines; j++) {
            if(j <= lines + 1 - i) { // Condition to print characters
                printf("%c", k); // Print the current character
                k++; // Increment character to the next letter
            } else
                printf(" "); // Print space
        }
        printf("\n"); // New line after each row
    }

    return 0; // Indicate successful completion
}
