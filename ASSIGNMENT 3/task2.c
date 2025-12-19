/*
 * File: task2.c
 * Author: Your Name
 * Description: Demonstrates the difference between a variable and a pointer,
 *              and how pointers store and access memory addresses.
 */

#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int num = 10;

    // Declare an integer pointer
    int *ptr;

    // Store the address of num in the pointer ptr
    ptr = &num;

    // Print the required information
    printf("========== TASK 2: Display Address of a Variable ==========\n\n");
    printf("Value of num:                     %d\n", num);
    printf("Address of num (&num):            %p\n", (void*)&num);
    printf("Value stored in ptr (address):    %p\n", (void*)ptr);
    printf("Value accessed using *ptr:        %d\n", *ptr);
    printf("\n");

    // Verify that ptr points to num
    printf("Verification:\n");
    printf("&num == ptr? %s\n", (&num == ptr) ? "Yes" : "No");
    printf("num == *ptr? %s\n", (num == *ptr) ? "Yes" : "No");

    return 0;
}
