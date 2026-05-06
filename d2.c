#include <stdio.h>

int main() {
    int num, i;
    long long factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial = 1;

    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= num; i++)
            factorial *= i;

        printf("%d! = %lld\n", num, factorial);
    }

    return 0;
}