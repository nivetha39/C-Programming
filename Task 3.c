#include <stdio.h>

int main() {
    float results[100]; // To store up to 100 results
    int index = 0;
    int choice;
    float a, b, result;

    while (1) {
        printf("Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide 0.Exit\n");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
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
                    printf("Cannot divide by zero.\n");
                    continue;
                }
                break;
            default:
                printf("Invalid choice.\n");
                continue;
        }

        printf("Result: %.2f\n", result);
        results[index++] = result; // Store result
    }

    // After exiting, print history
    printf("\n--- History of Calculations ---\n");
    for (int i = 0; i < index; i++) {
        printf("Result %d: %.2f\n", i + 1, results[i]);
    }

    return 0;
}
