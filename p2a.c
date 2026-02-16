#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter the value of A,B and c");
        scanf("%d %d %d", &a , &b , &c);
        if(a==b && b==c)
        {
            printf("ALL THE THREE NUMBERS ARE SAME");
        }
        else if(a>b && a>c)
        {
            printf("MAX NUMBER IS A");
        }
         else if(b>a && b>c)
        {
            printf("MAX NUMBER IS B");
        }
        if (c>a && c>b)
        {
            printf("MAX NUMBER IS C");
        }
return 0;
}
