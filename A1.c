#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n--- Number Check ---\n");
    if (num > 0)
        printf("%d is Positive\n", num);
    else if (num < 0)
        printf("%d is Negative\n", num);
    else
        printf("The number is Zero\n");

    printf("\n--- Day Check ---\n");
    switch (num) {
        case 1: printf("Day 1: Monday\n");    break;
        case 2: printf("Day 2: Tuesday\n");   break;
        case 3: printf("Day 3: Wednesday\n"); break;
        case 4: printf("Day 4: Thursday\n");  break;
        case 5: printf("Day 5: Friday\n");    break;
        case 6: printf("Day 6: Saturday\n");  break;
        case 7: printf("Day 7: Sunday\n");    break;
        default: printf("Invalid day (enter 1-7)\n");
    }

    return 0;
}