// task7.c - Circular Data Logger
#include <stdio.h>

#define BUFFER_SIZE 5  // Can be changed to 10 as per requirement

int buffer[BUFFER_SIZE];
int write_index = 0;
int count = 0;

void insert_sample(int value) {
    buffer[write_index] = value;
    write_index = (write_index + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

void print_samples() {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    printf("Stored samples in chronological order (oldest → newest): ");

    if (count < BUFFER_SIZE) {
        // Buffer not full, print from index 0 to count-1
        for (int i = 0; i < count; i++) {
            printf("%d ", buffer[i]);
        }
    } else {
        // Buffer is full, print from oldest to newest
        int start_index = write_index;  // Oldest element is at write_index when buffer is full
        for (int i = 0; i < BUFFER_SIZE; i++) {
            printf("%d ", buffer[(start_index + i) % BUFFER_SIZE]);
        }
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("=== Circular Data Logger ===\n");
    printf("Buffer size: %d\n", BUFFER_SIZE);
    printf("Enter -1 to exit the program\n\n");

    while (1) {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        if (value == -1) {
            break;
        }

        insert_sample(value);
        printf("Inserted: %d\n", value);
    }

    printf("\n");
    print_samples();

    return 0;
}
