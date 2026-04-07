#include <stdio.h>

int factRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factRecursive(n - 1);
}

int factIterative(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int choice, num;

    printf("=== Factorial Program ===\n");
    printf("1. Iterative Method\n");
    printf("2. Recursive Method\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    printf("Enter a non-negative number: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    if (num < 0) {
        printf("Factorial not defined for negative numbers!\n");
        return 0;
    }

    if (num > 12) {
        printf("Number too large! Enter number <= 12\n");
        return 0;
    }

    switch (choice) {
        case 1:
            printf("Factorial (Iterative) = %d\n", factIterative(num));
            break;

        case 2:
            printf("Factorial (Recursive) = %d\n", factRecursive(num));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}