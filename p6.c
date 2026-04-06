#include<stdio.h>
#include<string.h>
#define MAX 100
struct STUDENT
{
      char Name[50];
      int RollNo;
      float Marks;
      char Grade[50];
};
int main()
{
    int n,i;
    printf("Enter the Number of Students");
    scanf("%d",&n);
    struct STUDENT s[n];
    for(i=0;i<n;i++)
    {
          printf("Enter the Detail of Student: %d \n",i+1);
          printf("\nEnter Name ");
          scanf(" %[^\n]",s[i].Name);
          printf("\nEnter Roll NO ");
          scanf("%d",&s[i].RollNo);
          printf("\nEnter Marks ");
          scanf("%f",&s[i].Marks);
          printf("\nEnter Grade ");
          scanf(" %c",s[i].Grade);
    }
          printf("\n**********Student Records**********\n");
          for(i=0;i<n;i++)
          {
                printf("\n Students %d:\n",i+1);
                printf("Name: %s \n",s[i].Name);
                printf("RollNo: %d \n",s[i].RollNo);
                printf("Marks: %.2f \n",s[i].Marks);
                printf("Grade: %s \n",s[i].Grade);
          }
          return 0;
}
