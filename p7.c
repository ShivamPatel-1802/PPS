#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    char filename[100], content[10000], ch;
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    while(1) {
        printf("\n1. Read\n2. Change\n3. Copy to New File\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                fp = fopen(filename, "r");
                if(!fp) { printf("File not found!\n"); break; }
                while((ch = fgetc(fp)) != EOF) putchar(ch);
                fclose(fp);
                break;

            case 2:
                printf("Enter new content: ");
                getchar();
                fgets(content, 10000, stdin);
                fp = fopen(filename, "w");
                fprintf(fp, "%s", content);
                fclose(fp);
                printf("Done!\n");
                break;

            case 3:
                char newfile[100];
                printf("Enter new filename: ");
                scanf("%s", newfile);
                fp = fopen(filename, "r");
                FILE *fp2 = fopen(newfile, "w");
                while((ch = fgetc(fp)) != EOF) fputc(ch, fp2);
                fclose(fp); fclose(fp2);
                printf("Copied!\n");
                break;

            case 4:
                printf("Bye!\n");
                exit(0);
        }
    }
}