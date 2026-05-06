#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nInserted Elements:\n");
    for (i = 0; i < 5; i++)
        printf("Element %d: %d\n", i + 1, arr[i]);

    return 0;
}