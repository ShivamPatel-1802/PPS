#include <stdio.h>
#include <string.h>

int main()
{
    int choice, a[10], n, i, j, temp, key, found=0;
    char s1[50], s2[50];

    printf("1.Sort Array\n2.Search Array\n3.String Concatenate\n4.String Compare\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter size: ");
        scanf("%d",&n);

        printf("Enter elements:\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        printf("Sorted array: ");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    }

    else if(choice==2)
    {
        printf("Enter size: ");
        scanf("%d",&n);

        printf("Enter elements:\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        printf("Enter number to search: ");
        scanf("%d",&key);

        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                found=1;
                printf("Number found at position %d",i+1);
                break;
            }
        }

        if(found==0)
        printf("Number not found");
    }

    else if(choice==3)
    {
        printf("Enter first string: ");
        scanf("%s",s1);

        printf("Enter second string: ");
        scanf("%s",s2);

        strcat(s1,s2);
        printf("Result: %s",s1);
    }

    else if(choice==4)
    {
        printf("Enter first string: ");
        scanf("%s",s1);

        printf("Enter second string: ");
        scanf("%s",s2);

        if(strcmp(s1,s2)==0)
        printf("Strings are equal");
        else
        printf("Strings are not equal");
    }

    else
    printf("Invalid choice");

    return 0;
}