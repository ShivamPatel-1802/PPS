#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        for(b=2;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
