// task6.c - Insert in Unsorted Array
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, arr[MAX_SIZE];

    printf("Input the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe current list of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value, position;
    printf("\nInput the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &position);

    // Check if position is valid
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position] = value;
    n++;  // Increase array size

    printf("\nAfter Insert the element the new list is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
