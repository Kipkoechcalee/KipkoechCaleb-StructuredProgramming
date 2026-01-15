// task8.c - 2D Array Traversal
#include <stdio.h>

#define ROWS 6
#define COLS 4

int main() {
    // Create and initialize a 6x4 array
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    printf("2D Array (%dx%d):\n", ROWS, COLS);
    printf("===================\n");

    // Traverse and print each element
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    // Alternative: Show in matrix format
    printf("\nMatrix Format:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
