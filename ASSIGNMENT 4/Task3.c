// task3.c - Print Unique Elements
#include <stdio.h>

int main() {
    int n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe unique elements found in the array are: ");

    for (int i = 0; i < n; i++) {
        int isUnique = 1;

        // Check if arr[i] is unique
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
