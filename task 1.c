#include <stdio.h>

int main() {
    int op;
    float a, b, result;
    char cont;

    do {

        printf("Choose operation:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &op);

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (op) {
            case 1:
                result = a + b;
                break;
            case 2:
                result = a - b;
                break;
            case 3:
                result = a * b;
                break;
            case 4:
                if (b != 0)
                    result = a / b;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                break;
            default:
                printf("Invalid option.\n");
                continue;
        }

        printf("Result: %.2f\n", result);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont); 

    } while (cont == 'y' || cont == 'Y');

    printf("Calculator exited.\n");
    return 0;
}
