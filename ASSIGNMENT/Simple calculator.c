// simple_calculator.c
// Simple calculator:takes two inputs
//Performs addition,subtraction...
// displays the results

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    long long num1, num2;
    int inputsValues;

    printf("Enter two integers separated by space: ");
    inputsValues = scanf("%lld %lld", &num1, &num2);
    if (inputsValues != 2) {
        fprintf(stderr, "Invalid input. Please enter two integers.\n");
        return 1;
    }

    printf("\nResults for %lld and %lld:\n", num1, num2);
    printf("Addition:        %lld\n", num1 + num2);
    printf("Subtraction:     %lld\n", num1 - num2);
    printf("Multiplication:  %lld\n", num1 * num2);

    if (num2 == 0) {
        printf("Division:        undefined\n");
        printf("Modulus:         undefined\n");
    } else {
        double div = (double)num1 / (double)num2;
        printf("Division:        %.6f\n", div);
        printf("Modulus:         %lld\n", num1 % num2);
    }

    return 0;
}
