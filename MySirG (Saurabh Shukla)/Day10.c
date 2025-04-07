/*
Day 10 of C programming
*/

// Switch Case Control

#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for exit function

int main() {
    // Variable declarations
    int x, r, l, b, n1, n2, n3;
    float area; // Declare area as a float for calculations

    // Display menu options
    printf("\n1. Area of Circle");
    printf("\n2. Area of Rectangle");
    printf("\n3. Average of Three Numbers");
    printf("\n4. Exit");
    printf("\n5. Enter Your Choice: ");
    scanf("%d", &x); // Read user choice

    // Switch case to handle user choice
    switch(x) {
        case 1: // Area of Circle
            printf("Enter radius of circle: ");
            scanf("%d", &r);
            area = 3.14 * r * r; // Calculate area of the circle using the formula πr²
            printf("Area is: %f\n", area);
            break;

        case 2: // Area of Rectangle
            printf("Enter length and breadth of the rectangle: ");
            scanf("%d%d", &l, &b);
            area = l * b; // Calculate area of the rectangle using the formula length * breadth
            printf("Area of Rectangle is: %f\n", area); // Changed to %f for consistency
            break;

        case 3: // Average of Three Numbers
            printf("Enter three numbers: ");
            scanf("%d%d%d", &n1, &n2, &n3);
            area = (n1 + n2 + n3) / 3.0; // Calculate average by summing the numbers and dividing by 3.0
            printf("Average of the three numbers is: %f\n", area);
            break;

        case 4: // Exit the program
            exit(0); // Exit the program

        default: // Handle invalid choice
            printf("Invalid choice\n");
    }

    return 0; // Return success
}


