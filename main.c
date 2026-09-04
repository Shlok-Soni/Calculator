#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n=================================\n");
    printf("        C CALCULATOR\n");
    printf("=================================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Square Root\n");
    printf("8. Percentage\n");
    printf("9. Exit\n");
    printf("=================================\n");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        showMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 9) {
            printf("\nThank you for using the calculator!\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if (num2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5: {
                int a, b;

                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);

                if (b == 0) {
                    printf("Error: Cannot calculate modulus by zero.\n");
                } else {
                    printf("Result = %d\n", a % b);
                }
                break;
            }

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);

                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);

                if (num1 < 0) {
                    printf("Error: Square root of a negative number is not real.\n");
                } else {
                    result = sqrt(num1);
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 8:
                printf("Enter total value: ");
                scanf("%lf", &num1);

                printf("Enter percentage: ");
                scanf("%lf", &num2);

                result = (num1 * num2) / 100;
                printf("%.2lf%% of %.2lf = %.2lf\n",
                       num2, num1, result);
                break;

            default:
                printf("Invalid choice! Please select 1-9.\n");
        }
    }

    return 0;
}
