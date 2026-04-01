#include <stdio.h>
#include <string.h>

// Function declarations
void sortArray();
void searchArray();
void stringConcatenate();
void stringCompare();

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Sort Array\n");
        printf("2. Search in Array\n");
        printf("3. String Concatenation\n");
        printf("4. String Comparison\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                sortArray();
                break;

            case 2:
                searchArray();
                break;

            case 3:
                stringConcatenate();
                break;

            case 4:
                stringCompare();
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}


// Function to sort array
void sortArray()
{
    int a[10], n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


// Function to search element
void searchArray()
{
    int a[10], n, i, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            printf("Number found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found\n");
    }
}


// Function for string concatenation
void stringConcatenate()
{
    char s1[50], s2[50];

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    strcat(s1,s2);

    printf("Concatenated String: %s\n",s1);
}


// Function for string comparison
void stringCompare()
{
    char s1[50], s2[50];

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    if(strcmp(s1,s2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}