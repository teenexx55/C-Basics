#include <stdio.h>

int calculate(int a, int b, char operator) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero\n");
                return 0; // Return 0 for division by zero
            }
        default:
            printf("Error: Invalid operator\n");
            return 0; // Return 0 for invalid operator
    }
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    int result = calculate(num1, num2, operator);
    printf("Result: %d\n", result);

    return 0;
}