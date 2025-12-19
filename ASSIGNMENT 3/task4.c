/*
 * File: task4.c
 * Author: Your Name
 * Description: Performs arithmetic operations using pointer dereferencing.
 */

#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2;

    // Declare two integer pointers
    int *ptr1, *ptr2;

    // Assign values to the variables
    num1 = 15;
    num2 = 27;

    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the values using pointer dereferencing
    int sum = *ptr1 + *ptr2;

    printf("========== TASK 4: Add Two Numbers Using Pointers ==========\n\n");
    printf("num1 = %d (address: %p)\n", num1, (void*)&num1);
    printf("num2 = %d (address: %p)\n", num2, (void*)&num2);
    printf("\n");
    printf("ptr1 points to address: %p, value: %d\n", (void*)ptr1, *ptr1);
    printf("ptr2 points to address: %p, value: %d\n", (void*)ptr2, *ptr2);
    printf("\n");
    printf("Sum using pointer dereferencing:\n");
    printf("*ptr1 + *ptr2 = %d + %d = %d\n", *ptr1, *ptr2, sum);
    printf("\n");
    printf("Stored in variable 'sum': %d\n", sum);

    return 0;
}
