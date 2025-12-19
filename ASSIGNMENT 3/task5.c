/*
 * File: task5.c
 * Author: Your Name
 * Description: Demonstrates pass by reference using pointers and functions.
 */

#include <stdio.h>

// Function prototype
void swapNumbers(int *a, int *b);

int main() {
    // Declare and initialize two integer variables
    int a = 10, b = 20;

    printf("========== TASK 5: Swap Two Numbers Using Pointers ==========\n\n");
    printf("Before swapping:\n");
    printf("a = %d, address: %p\n", a, (void*)&a);
    printf("b = %d, address: %p\n", b, (void*)&b);
    printf("\n");

    // Call swapNumbers function, passing addresses of a and b
    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, address: %p\n", a, (void*)&a);
    printf("b = %d, address: %p\n", b, (void*)&b);

    return 0;
}

/*
 * Function: swapNumbers
 * Parameters: two integer pointers (int *a, int *b)
 * Returns: void
 * Description: Swaps the values of the two integers using pointer dereferencing
 */
void swapNumbers(int *a, int *b) {
    int temp;

    printf("Inside swapNumbers function:\n");
    printf("  a (pointer) points to address: %p, value: %d\n", (void*)a, *a);
    printf("  b (pointer) points to address: %p, value: %d\n", (void*)b, *b);
    printf("\n");
    printf("  Performing swap...\n");

    // Swap using dereferencing
    temp = *a;
    *a = *b;
    *b = temp;
}
