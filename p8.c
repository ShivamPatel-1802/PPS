#include <stdio.h>

int main() {
    FILE *data, *odd, *even;
    int num;

    data = fopen("data.txt", "r");
    odd  = fopen("odd.txt",  "w");
    even = fopen("even.txt", "w");

    while (fscanf(data, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(even, "%d\n", num);
        else
            fprintf(odd, "%d\n", num);
    }

    fclose(data);
    fclose(odd);
    fclose(even);

    printf("ODD NUMBERS:\n");
    odd = fopen("odd.txt", "r");
    while (fscanf(odd, "%d", &num) != EOF)
        printf("%d\n", num);
    fclose(odd);

    printf("\nEVEN NUMBERS:\n");
    even = fopen("even.txt", "r");
    while (fscanf(even, "%d", &num) != EOF)
        printf("%d\n", num);
    fclose(even);

    return 0;
}