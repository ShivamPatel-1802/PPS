#include <stdio.h>

int main() {
    int num, original, reversed, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    reversed = 0;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Original : %d\n", original);
    printf("Reversed : %d\n", reversed);

    if (original == reversed)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is Not a Palindrome\n", original);

    return 0;
}