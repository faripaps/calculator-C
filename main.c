#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operation;

    printf("Simple Calculator\n");
    printf("-----------------\n\n");

    while (1) {
        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        printf("\nSelect an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Square Root (√)\n");

        scanf(" %c", &operation);
        printf("\n");

        switch (operation) {
            case '1':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '2':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '3':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '4':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case '5':
                result = fmod(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case '6':
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Square root of a negative number is not defined.\n");
                }
                break;
            default:
                printf("Invalid operation selected.\n");
                break;
        }

        char choice;
        printf("\nPress any key to continue or 'Q' to quit.\n");
        scanf(" %c", &choice);
        printf("\n");

        if (choice == 'q' || choice == 'Q') {
            break;
        }
    }

    printf("Program finished. Press any key to exit.");
    getchar();
    return 0;
}
