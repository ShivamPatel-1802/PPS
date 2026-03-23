#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int choice, i, length;

    do {
        printf("\n===== String Menu =====\n");
        printf("1. Reverse String\n");
        printf("2. Convert to Uppercase\n");
        printf("3. Convert to Lowercase\n");
        printf("4. Find Length\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); 

        if (choice >= 1 && choice <= 4) {
            printf("Enter a string: ");
            fgets(str, sizeof(str), stdin);

            str[strcspn(str, "\n")] = '\0';
        }

        switch (choice) {
            case 1:
                length = strlen(str);
                for (i = 0; i < length; i++) {
                    temp[i] = str[length - i - 1];
                }
                temp[length] = '\0';
                printf("Reversed String: %s\n", temp);
                break;

            case 2:
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32; 
                    }
                }
                printf("Uppercase: %s\n", str);
                break;

            case 3:
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32; 
                    }
                }
                printf("Lowercase: %s\n", str);
                break;

            case 4:
                length = strlen(str);
                printf("Length of string: %d\n", length);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
