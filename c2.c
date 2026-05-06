#include <stdio.h>

int main() {
    int n, i, a, b, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}