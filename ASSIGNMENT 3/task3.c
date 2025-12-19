/*
 * File: task3.c
 * Author: Your Name
 * Description: Demonstrates pointer dereferencing and value modification using pointers.
 */

#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int count = 10;

    // Declare an integer pointer
    int *pCount;

    // Assign the address of count to pCount
    pCount = &count;

    printf("========== TASK 3: Access Variable Value Using Pointer ==========\n\n");
    printf("Initial value of count: %d\n", count);
    printf("Address of count:       %p\n", (void*)&count);
    printf("Value in pCount:        %p\n", (void*)pCount);
    printf("\n");

    // Modify the value of count using the pointer pCount
    *pCount = 25;

    printf("After modification using pointer:\n");
    printf("Value of *pCount:       %d\n", *pCount);
    printf("Updated value of count: %d\n", count);
    printf("\n");

    // Another modification example
    *pCount += 15;
    printf("After incrementing by 15 using pointer:\n");
    printf("Value of count:         %d\n", count);

    return 0;
}
