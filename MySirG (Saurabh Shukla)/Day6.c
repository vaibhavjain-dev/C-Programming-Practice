/*
Day 6 of C programming
*/

// Program to check whether a given number is divisible by 3 and 2

#include <stdio.h>

int main() 
{
    int x;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &x);

    // Check if the number is divisible by both 3 and 2
    if (x % 3 == 0 && x % 2 == 0) {
        printf("Divisible by 3 and 2\n");
    } else {
        printf("Not divisible by 3 and 2\n");
    }

    return 0; // Return success
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
#include <conio.h>

int main() {
    int x;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &x);

    // Check if the number is divisible by 7 or 3
    if (x % 7 == 0 || x % 3 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not divisible\n");
    }

    getch();
    
    return 0; // Return success
}

////////////////////////////////////////////////////////////////////////////////////////////

// Program to check whether a given character is an alphabet (lower case), a digit, or a special character

#include <stdio.h>
#include <conio.h>

int main() {
    char x; // Changed type to char

    printf("Enter a Character: ");
    scanf(" %c", &x); // Use %c to read a character

    // Check if the character is an uppercase alphabet
    if (x >= 'A' && x <= 'Z') {
        printf("Upper case Alphabet\n");
    }
    // Check if the character is a lowercase alphabet
    else if (x >= 'a' && x <= 'z') {
        printf("Lower case Alphabet\n");
    }
    // Check if the character is a digit
    else if (x >= '0' && x <= '9') {
        printf("Digit\n");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    getch();
    return 0; // Return success
}

////////////////////////////////////////////////////////////////////////////////////////////