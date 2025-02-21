/*
Day 3 of C programming
Operators
*/

// UNARY Operators
#include <stdio.h>

int main() {
    int x = 5;
    printf("%d \n", x);

    x++; // Post increment 
    printf("%d \n", x);

    ++x; // Pre increment 
    printf("%d \n", x);
    
    x--; // Post Decrement 
    printf("%d \n", x);

    --x; // Pre Decrement 
    printf("%d \n", x);

    return 0; // Indicate successful completion of the program
}

// Example of Unary + Assignment operator
#include <stdio.h>

int main() {
    int x = 5, y;

    y = ++x; // Pre-increment x, so x becomes 6 and y is assigned the value of x
    printf("%d %d\n", x, y); // Print the values of x and y

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

// Arithmetic Operators
#include <stdio.h>

int main() {
    int x = 3, y = 4;

    // High Priority Operators in left to right order (*, /, %)
    printf("When %d * %d, Answer is %d \n", x, y, x * y);
    printf("When %d / %d, Answer is %d \n", x, y, x / y);
    printf("When %d %% %d, Answer is %d \n", x, y, x % y);

    printf("\n");

    // Low Priority Operators in left to right order (+, -)
    printf("When %d + %d, Answer is %d \n", x, y, x + y);
    printf("When %d - %d, Answer is %d \n", x, y, x - y);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

// Bitwise Operators &, |, ^, and ~.
/*
True = 1
False = 0
*/
#include <stdio.h>

 int main() {
    int x = 3; // Binary: 0011
    int y = 4; // Binary: 0100

    // Bitwise AND Operator
    printf("When %d & (AND) %d, Answer is %d \n", x, y, x & y); // Result: 0 (Binary: 0000)

    // Bitwise OR Operator
    printf("When %d | (OR) %d, Answer is %d \n", x, y, x | y); // Result: 7 (Binary: 0111)

    // Bitwise XOR Operator
    printf("When %d ^ (XOR) %d, Answer is %d \n", x, y, x ^ y); // Result: 7 (Binary: 0111)

    // Bitwise NOT Operator
    printf("When ~%d (NOT), Answer is %d \n", x, ~x); // Result: -4 (Binary: 1100 in 2's complement)
    printf("When ~%d (NOT), Answer is %d \n", y, ~y); // Result: -5 (Binary: 1011 in 2's complement)

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

// Relational Operators <, >, <=, >=, ==, !=
/*
True = 1
False = 0
*/
#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int x = 3; 
    int y = 4; 

    // Using relational operators to compare x and y
    printf("When %d < %d, Answer is %d \n", x, y, x < y);   // Less than
    printf("When %d > %d, Answer is %d \n", x, y, x > y);   // Greater than
    printf("When %d <= %d, Answer is %d \n", x, y, x <= y); // Less than or equal to
    printf("When %d >= %d, Answer is %d \n", x, y, x >= y); // Greater than or equal to
    printf("When %d != %d, Answer is %d \n", x, y, x != y);  // Not equal to

    return 0; // Return 0 to indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Logical Operators ! Not, && AND, || OR
/*
True = 1
False = 0
*/
#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int x = 3; 
    int y = 4; 

    // Using logical operators to evaluate expressions
    printf("When %d && %d, Answer is %d \n", x, y, x && y); // Logical AND
    printf("When %d || %d, Answer is %d \n", x, y, x || y); // Logical OR
    printf("When !%d, Answer is %d \n", x, !x);             // Logical NOT

    return 0; // Return 0 to indicate successful completion
}

////////////////////////////////////////////////////////////////////////////////////////////

// Assignment Operators
#include <stdio.h>

int main() {
    int x = 5; // Initialize x with 5

    // Using various assignment operators
    x += 2; // Equivalent to x = x + 2
    printf("After += 2, x is %d \n", x);

    x -= 3; // Equivalent to x = x - 3
    printf("After -= 3, x is %d \n", x);

    x *= 4; // Equivalent to x = x * 4
    printf("After *= 4, x is %d \n", x);

    x /= 2; // Equivalent to x = x / 2
    printf("After /= 2, x is %d \n", x);

    x %= 3; // Equivalent to x = x % 3
    printf("After %%= 3, x is %d \n", x);

    return 0; // Return 0 to indicate successful completion
}