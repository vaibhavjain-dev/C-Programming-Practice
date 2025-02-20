// Day 1 of C programming

// Program 1: Declare variables and assign values
#include <stdio.h>

int main() {
    int a = 1, b = 2;
    printf("Value of a and b is %d & %d\n", a, b);
    return 0;
}

// Program 2: Taking input through keyboard using scanf()
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 2 values: ");
    scanf("%d %d", &a, &b);
    printf("Value of a and b is %d & %d\n", a, b);
    printf("This is Backslash N\n");
    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////


// Escape Sequences
#include <stdio.h>

int main() {
    // Example of newline escape sequence
    printf("Hello, World!\n"); // Moves to the next line after printing

    // Example of tab escape sequence
    printf("Hello,\tWorld!\n"); // Inserts a tab space between "Hello," and "World!"

    // Example of backspace escape sequence
    printf("Hello,\b World!\n"); // The backspace will remove the 'o' in "Hello,"

    // Example of backslash escape sequence
    printf("This is a backslash: \\\n"); // Prints a single backslash

    // Example of single quote escape sequence
    printf("This is a single quote: '\n"); // Prints a single quote

    // Example of double quote escape sequence
    printf("This is a double quote: \"\n"); // Prints a double quote

    printf("\n");

    // Combining all escape sequences in a single message
    printf("Escape Sequences:\n");
    printf("1. Newline: Hello,\nWorld!\n");
    printf("2. Tab: Hello,\tWorld!\n");
    printf("3. Backspace: Hello,\bWorld!\n");
    printf("4. Backslash: This is a backslash: \\\n");
    printf("5. Single Quote: This is a single quote: '\n");
    printf("6. Double Quote: This is a double quote: \"\n");

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////


// Format Specifiers
#include <stdio.h>

int main() {
    // String 
    const char *message = "Hello World";

    // Integer
    int number = 42;

    // Float
    float pi = 3.14;

    // Character
    char initial = 'H';

    // Printing messages with format specifiers
    printf("String: %s\n", message);          // Correctly prints the string
    printf("Integer: %d\n", number);          // Correctly prints the integer
    printf("Float: %.2f\n", pi);               // Correctly prints the float
    printf("Character: %c\n", initial);       // Correctly prints the character
    
    return 0;
}