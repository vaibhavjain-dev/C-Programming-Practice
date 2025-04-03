/*
Day 10 of C programming
*/

// Switch Case Control

#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for exit function

int main() {
    int x, r, l, b, n1, n2, n3;
    float area; // Declare area as a float for calculations

    printf("\n1. Area of Circle");
    printf("\n2. Area of Rectangle");
    printf("\n3. Average of Three Numbers");
    printf("\n4. Exit");
    printf("\n5. Enter Your Choice: ");
    scanf("%d", &x);

    switch(x) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%d", &r);
            area = 3.14 * r * r; // Calculate area of the circle
            printf("Area is: %f\n", area);
            break;

        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%d%d", &l, &b);
            area = l * b; // Calculate area of the rectangle
            printf("Area of Rectangle is: %f\n", area); // Changed to %f for consistency
            break;

        case 3:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &n1, &n2, &n3);
            area = (n1 + n2 + n3) / 3.0; // Calculate average
            printf("Average of the three numbers is: %f\n", area);
            break;

        case 4:
            exit(0); // Exit the program

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

