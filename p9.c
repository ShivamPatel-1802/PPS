#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    long int size, i;
    char ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);

    size = ftell(fp);

    for (i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
