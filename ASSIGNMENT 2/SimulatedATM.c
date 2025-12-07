#include <stdio.h>
#include <stdbool.h>

#define PIN 1234  // Predefined PIN for login
#define MAX_ATTEMPTS 3

// Global balance (for simplicity)
float balance = 5000.0;  // Starting balance

// Function prototypes
bool login();
void showMenu();
void checkBalance();
void deposit(float amount);
void withdraw(float amount);

int main() {
    printf("=== Welcome to ATM Simulator ===\n");

    if (!login()) {
        printf("Too many failed attempts. Exiting...\n");
        return 1;
    }

    int choice;
    float amount;

    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// PIN verification function
bool login() {
    int enteredPin;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == PIN) {
            printf("Login successful!\n");
            return true;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", MAX_ATTEMPTS - attempts);
        }
    }
    return false;
}

// Show menu
void showMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

// Check balance
void checkBalance() {
    printf("Your current balance: $%.2f\n", balance);
}

// Deposit money
void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Deposited $%.2f. New balance: $%.2f\n", amount, balance);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

// Withdraw money
void withdraw(float amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrew $%.2f. New balance: $%.2f\n", amount, balance);
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        printf("Invalid withdrawal amount.\n");
    }
}
