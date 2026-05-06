#include <stdio.h>

int main() {
    int num, reversed, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = 0;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}