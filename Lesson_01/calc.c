#include <stdio.h>

int main() {
    int op;
    float num1, num2, result;

    // Display the menu
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &op);

    // invalid input
    if (op < 1 || op > 4) {
        printf("Invalid choice! Please select 1-4\n");
        return 1;
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case 1:
            result = num1 + num2;
            printf("Result %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed\n");
            } else {
                result = num1 / num2;
                printf("Result %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operation! Please try again.\n");
    }

    return 0;
}