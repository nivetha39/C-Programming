#include <stdio.h>
#include <math.h>

// Recursive function for power
double power(double base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return 1 / power(base, -exp); // for negative exponents
}

int main() {
    int choice;
    double num1, num2, result;
    int int1, int2;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Modulo\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

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
                if (num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5: // Power
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                // Using math.h pow()
                printf("Using pow(): %.2lf\n", pow(num1, num2));
                // Using recursion
                printf("Using recursion: %.2lf\n", power(num1, (int)num2));
                break;

            case 6: // Square Root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0)
                    printf("Square Root = %.2lf\n", sqrt(num1));
                else
                    printf("Error! Negative number.\n");
                break;

            case 7: // Modulo
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                if (int2 != 0)
                    printf("Result = %d\n", int1 % int2);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
