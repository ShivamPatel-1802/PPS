#include <stdio.h>
int factorialRecursive(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}
int factorialIterative(int n) 
{
    int fact = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main() 
{
    int choice, num;
    while(1) 
    {
        printf("\n===== Factorial Calculator =====\n");
        printf("1. Factorial using Iterative Method\n");
        printf("2. Factorial using Recursive Method\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 3) 
        {
            printf("Program Exiting...\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num < 0) 
        {
            printf("Error: Factorial of negative numbers is not defined.\n");
            continue;
        }
        if(num > 12) 
        {
            printf("Warning: Number too large. Result may overflow.\n");
        }
        switch(choice) 
        {
            case 1:
                printf("Factorial (Iterative) = %d\n", factorialIterative(num));
                break;
            case 2:
                printf("Factorial (Recursive) = %d\n", factorialRecursive(num));
                break;
            default:
                printf("Invalid Choice! Please select 1, 2, or 3.\n");
        }
    }
    return 0;
}
