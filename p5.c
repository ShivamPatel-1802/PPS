
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0, newSize, choice, i;

    while (1) {
        printf("\nDynamic Array Operations:\n");
        printf("1 - Create a new dynamic array (malloc)\n");
        printf("2 - Add elements to the array\n");
        printf("3 - Resize the array (realloc)\n");
        printf("4 - Display the array\n");
        printf("5 - Free memory and exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (arr != NULL) {
                printf("Array already exists. Free it first before creating new one.\n");
                break;
            }

            printf("Enter the number of elements to allocate: ");
            scanf("%d", &size);

            if (size <= 0) {
                printf("Invalid size.\n");
                break;
            }

            arr = (int *)malloc(size * sizeof(int));

            if (arr == NULL) {
                printf("Memory allocation failed.\n");
            } else {
                printf("Memory allocated successfully.\n");
            }
            break;

        case 2:
            if (arr == NULL) {
                printf("Array not created yet.\n");
                break;
            }

            printf("Enter %d elements:\n", size);
            for (i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
            }
            printf("Elements added successfully.\n");
            break;

        case 3:
            if (arr == NULL) {
                printf("Array not created yet.\n");
                break;
            }

            printf("Enter new size: ");
            scanf("%d", &newSize);

            if (newSize <= 0) {
                printf("Invalid size.\n");
                break;
            }

            int *temp = (int *)realloc(arr, newSize * sizeof(int));

            if (temp == NULL) {
                printf("Reallocation failed.\n");
            } else {
                arr = temp;
                if (newSize > size) {
                    printf("Enter %d new elements:\n", newSize - size);
                    for (i = size; i < newSize; i++) {
                        scanf("%d", &arr[i]);
                    }
                }
                size = newSize;
                printf("Array resized successfully.\n");
            }
            break;

        case 4:
            if (arr == NULL) {
                printf("Array not created yet.\n");
                break;
            }

            printf("Array elements are:\n");
            for (i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 5:
            if (arr != NULL) {
                free(arr);
                arr = NULL;
                printf("Memory freed successfully.\n");
            }
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}