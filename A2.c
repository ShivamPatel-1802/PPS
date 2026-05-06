#include <stdio.h>

int main() {
    int i, num, digit, sum, choice, x;

    printf("--- Odd Numbers from 1 to 50 ---\n");
    i = 1;
    while (i <= 50) {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("\n--- Sum of Digits ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    sum = 0;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);

    printf("\n--- Menu ---\n");
    do {
        printf("\n1. Square\n2. Cube\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter a number: ");
            scanf("%d", &x);
            if (choice == 1)
                printf("Square: %d\n", x * x);
            else
                printf("Cube: %d\n", x * x * x);
        } else if (choice == 3) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}