#include<stdio.h>
int main()
{
    int a , b , c , d , e;
    int BOX=200 , PENCIL=10 , PEN=15 , ERASER=5 , COMPASS=200;
    int sum;
    printf("*****BILLING SYSTEM*****");
    printf("\nENTER THE NUMBER OF BOX YOU NEED\n");
    scanf("%d",&a);
    while(a<0)
    {
        printf("\nERROR: YOU ENTERED INVALID NUMBER PLS TRY AGAIN\n");
        scanf("%d",&a);
    }

    printf("\nENTER THE NUMBER OF PENCIL YOU NEED\n");
     scanf("%d",&b);
      while(b<0)
    {
        printf("\nERROR: YOU ENTERED INVALID NUMBER PLS TRY AGAIN\n");
        scanf("%d",&b);


    }
    printf("\nENTER THE NUMBER OF PEN YOU NEED\n");
     scanf(" %d",&c);
      while(c<0)
    {
        printf("\nERROR: YOU ENTERED INVALID NUMBER PLS TRY AGAIN\n");
        scanf(" %d",&c);


    }
    printf("\nENTER THE NUMBER OF ERASER YOU NEED \n");
     scanf(" %d",&d);
      while(d<0)
    {
        printf("\nERROR: YOU ENTERED INVALID NUMBER PLS TRY AGAIN\n");
        scanf("%d",&d);


    }
    printf("\nENTER THE NUMBER OF COMPASS YOU NEED\n");
     scanf("%d",&e);
      while(e<0)
    {
        printf("\nERROR: YOU ENTERED INVALID NUMBER PLS TRY AGAIN\n");
        scanf("%d",&e);


    }
     sum= (a*BOX)+(b*PENCIL)+(c*PEN)+(d*ERASER)+(e*COMPASS);
     printf("\nTHE TOTAL SUM OF THE BILL IS=%d",sum);
     if(sum>=1000)
     {
         printf("\nAFTER DISCOUNT THE SUM IS %d", sum-(sum*10/100));
     }
    else if(sum>=500)
     {
         printf("\nTHE DISCOUNT YOU WILL GET IS %d", sum-(sum*5/100));
     }
    return 0;


}
