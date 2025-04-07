/*
Day 11 of C programming

Functions
*/

/*
TYPE 1 - Take Nothing, Return Nothing
No Arguments, No return type
*/

#include <stdio.h>

// Function prototype
void add();

int main() {
    add(); // Call the add function to perform addition
    return 0; // Return success
}

void add() {
    int a, b, c;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b); // Input two numbers
    c = a + b; // Calculate the sum
    printf("Addition is %d\n", c); // Output the result
}

//////////////////////////////////////////////////////////////////////////////////

/*
TYPE 2 - Take Something, Return Nothing
With Arguments, No return type 
*/

#include <stdio.h>

// Function prototype
void add(int, int);

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y); // Input two numbers
    add(x, y); // Call the add function with arguments
    return 0; // Return success
}

void add(int a, int b) {
    int c;
    c = a + b; // Calculate the sum
    printf("Addition is %d\n", c); // Output the result
}

//////////////////////////////////////////////////////////////////////////////////

/*
TYPE 3 - Take Nothing, Return Something
No Arguments, With return type
*/

#include <stdio.h>

// Function prototype
int add();

int main() {
    int s;
    s = add(); // Call the add function and store the result
    printf("Addition is %d\n", s); // Output the result
    return 0; // Return success
}

int add() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b); // Input two numbers
    c = a + b; // Calculate the sum
    return c; // Return the sum
}

//////////////////////////////////////////////////////////////////////////////////

/*
TYPE 4 - Take Something, Return Something
With Arguments, With return type
*/

#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int x, y, s;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y); // Input two numbers
    s = add(x, y); // Call the add function and store the result
    printf("Sum is %d\n", s); // Output the result
    return 0; // Return success
}

int add(int a, int b) {
    int c;
    c = a + b; // Calculate the sum
    return c; // Return the sum
}

//////////////////////////////////////////////////////////////////////////////////

/*
Call by Value && Call by Reference
*/

// 1. Call by Value

#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int x = 5, y = 7;
    add(x, y); // Call the add function
    printf("\nThis is Main Fun\n x = %d and y = %d\n", x, y); // Output original values
    return 0; // Return success
}

// Function definition
int add(int x, int y) {
    x = 7; // Modify local copy of x
    y = 5; // Modify local copy of y
    printf("\nThis is Add Fun\n x = %d and y = %d\n", x, y); // Output modified values
}

//////////////////////////////////////////////////////////////////////////////////

// 2. Call by Reference

#include <stdio.h>

// Function prototype
void fun(int *x, int *y);

int main() {
    int x = 5, y = 7;
    fun(&x, &y); // Call the fun function with addresses of x and y
    printf("Inside Main function (Calling function)"); 
    printf("\nx = %d and y = %d\n", x, y); // Output modified values
    return 0; // Return success
}

// Function definition
void fun(int *x, int *y) {
    *x = 7; // Modify the value at the address of x
    *y = 5; // Modify the value at the address of y
    printf("Inside Fun function (Called function)"); 
    printf("\nx = %d and y = %d\n", *x, *y); // Output modified values
}