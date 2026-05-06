#include <stdio.h>

struct Student {
    int rollNo;
    char name[30];
    float marks;
};

int main() {
    struct Student s[3];
    int i, top;

    for (i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("  Roll No : ");
        scanf("%d", &s[i].rollNo);
        printf("  Name    : ");
        scanf(" %[^\n]", s[i].name);
        printf("  Marks   : ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    printf("--------------------------------------------------\n");
    printf("| %-6s | %-20s | %-6s |\n", "RollNo", "Name", "Marks");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 3; i++)
        printf("| %-6d | %-20s | %-6.2f |\n", s[i].rollNo, s[i].name, s[i].marks);
    printf("--------------------------------------------------\n");

    top = 0;
    for (i = 1; i < 3; i++)
        if (s[i].marks > s[top].marks)
            top = i;

    printf("\nTop Scorer:\n");
    printf("Name  : %s\n", s[top].name);
    printf("Marks : %.2f\n", s[top].marks);

    return 0;
}