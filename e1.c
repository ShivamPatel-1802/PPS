#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int i, pos, val, n;

    n = 5;

    printf("Original Array:\n");
    for (i = 0; i < n; i++)
        printf("Element %d: %d\n", i + 1, arr[i]);

    printf("\nEnter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
    } else {
        for (i = n; i >= pos; i--)
            arr[i] = arr[i - 1];

        arr[pos - 1] = val;
        n++;

        printf("\nUpdated Array:\n");
        for (i = 0; i < n; i++)
            printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}