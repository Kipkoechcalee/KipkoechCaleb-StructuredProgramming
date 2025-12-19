/*
 * File: task6.c
 * Author: Your Name
 * Description: Demonstrates the difference between pass by value and pass by reference.
 */

#include <stdio.h>

// Function prototypes
void incrementByValue(int num);
void incrementByReference(int *num);

int main() {
    int number = 5;

    printf("========== TASK 6: Pass by Value vs Pass by Reference ==========\n\n");
    printf("Initial value of number: %d\n", number);
    printf("Address of number:       %p\n", (void*)&number);
    printf("\n");

    // Call incrementByValue (pass by value)
    printf("--- Calling incrementByValue (Pass by Value) ---\n");
    incrementByValue(number);
    printf("After incrementByValue:  %d\n", number);
    printf("(Original value unchanged - function worked on a copy)\n");
    printf("\n");

    // Reset number for second test
    number = 5;
    printf("--- Reset number to: %d ---\n", number);
    printf("\n");

    // Call incrementByReference (pass by reference)
    printf("--- Calling incrementByReference (Pass by Reference) ---\n");
    printf("Passing address of number: %p\n", (void*)&number);
    incrementByReference(&number);
    printf("After incrementByReference: %d\n", number);
    printf("(Original value changed - function worked on original variable)\n");
    printf("\n");

    // Demonstrate with multiple increments
    printf("--- Multiple Increments Demonstration ---\n");
    int counter = 0;

    printf("Initial counter: %d\n", counter);

    // This won't change counter
    incrementByValue(counter);
    incrementByValue(counter);
    incrementByValue(counter);
    printf("After 3 incrementByValue calls: %d\n", counter);

    // This will change counter
    incrementByReference(&counter);
    incrementByReference(&counter);
    incrementByReference(&counter);
    printf("After 3 incrementByReference calls: %d\n", counter);

    return 0;
}

/*
 * Function: incrementByValue
 * Parameter: integer (passed by value)
 * Returns: void
 * Description: Increments the parameter, but only affects the local copy
 */
void incrementByValue(int num) {
    printf("  Inside incrementByValue:\n");
    printf("    Received value: %d\n", num);
    printf("    Address of parameter: %p\n", (void*)&num);
    num++;  // Only changes local copy
    printf("    After increment: %d\n", num);
    printf("    (This change won't affect the original variable)\n");
}

/*
 * Function: incrementByReference
 * Parameter: integer pointer (passed by reference)
 * Returns: void
 * Description: Increments the value at the memory location pointed to by num
 */
void incrementByReference(int *num) {
    printf("  Inside incrementByReference:\n");
    printf("    Received address: %p\n", (void*)num);
    printf("    Value at address: %d\n", *num);
    (*num)++;  // Changes the original variable
    printf("    After increment: %d\n", *num);
    printf("    (This change affects the original variable)\n");
}
