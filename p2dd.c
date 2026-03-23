#include <stdio.h>

int main() {
    char str[100];
    int choice, i, length;
    char ch;
    do {
        printf("\n===== String Menu =====\n");
        printf("1. Reverse String\n");
        printf("2. Convert to Uppercase\n");
        printf("3. Convert to Lowercase\n");
        printf("4. Find Length\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (choice >= 1 && choice <= 4) {
            printf("Enter a string: ");
            scanf("%s", str);
        }
        switch (choice) 
        {
            case 1:
                length = 0;
                while (str[length] != '\0') 
                {
                    length++;
                }            
                for (i = 0; i < length / 2; i++) 
                {
                    ch = str[i];
                    str[i] = str[length - i - 1];
                    str[length - i - 1] = ch;
                }
                printf("Reversed String: %s\n", str);
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
                length = 0;
                while (str[length] != '\0') {
                    length++;
                }
                printf("Length: %d\n", length);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}
