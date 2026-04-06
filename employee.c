#include<stdio.h>
#include<string.h>
#define MAX 100
struct EMPLOYEE
{
      char Name[50];
      float Salary;
      char Department[50];
};
int main()
{
    int n,i;
    printf("Enter the Number of Employee");
    scanf("%d",&n);
    struct EMPLOYEE s[n];
    for(i=0;i<n;i++)
    {
          printf("Enter the Detail of Employee: %d \n",i+1);
          printf("\nEnter Name  ");
          scanf("  %[^\n]",s[i].Name);
          printf("\nEnter Salary ");
          scanf("%f",&s[i].Salary);
          printf("\nEnter Department ");
          scanf("%s",s[i].Department );
    }
          printf("\n**********Employee Records**********\n");
          for(i=0;i<n;i++)
          {
                printf("\n Employee %d:\n", i+1);
                printf(" Name: %s \n",s[i].Name);
                printf("Salary: %.2f \n",s[i].Salary);
                printf(" Department: %s \n",s[i].Department);
          }
          return 0;
}
