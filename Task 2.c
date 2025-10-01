#include <stdio.h>

// Function to calculate sum of array
double add(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find maximum
double findMax(double arr[], int n) {
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
// Function to find minimum

double findMin(double arr[], int n) {
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int n, choice;
    double arr[100];  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Average of numbers\n");
        printf("2. Maximum value\n");
        printf("3. Minimum value\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Average = %.2lf\n", add(arr, n) / n);
                break;

            case 2:
                printf("Maximum = %.2lf\n", findMax(arr, n));
                break;

            case 3:
                printf("Minimum = %.2lf\n", findMin(arr, n));
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
