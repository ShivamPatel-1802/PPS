#include<stdio.h>
int main()
      {
  int choice, num , a,b,c , sum=0,r,n;
  do
  {
     printf("\n ***************************************\n");
     printf("\n1.check if a number is even or odd \n");
     printf("\n2.check if a number is positive or negative \n");
     printf("\n3.find greatest of three number \n");
     printf("\n4.sum of digit \n");
     printf("\n5.exit the program \n");
     printf("\nenter the choice \n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        printf("\nenter the number");
        scanf("%d",&num);
        if(num%2 == 0)
        {
           printf("\n %d is the even number",num);
        }
        else
        {
           printf("\n %d is the odd number",num);
           break;
        }
        case 2:
        printf("\nenter the number");
        scanf("%d",&num);
        if(num>=0)
        {
          printf("\n %d is the positive number",num);
        }
        else if(num<0)
        {
          printf("\n %d is the negative number",num);
          break;
        }
        case 3:
        printf("\nenter the number");
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b && a>=c)
        {
          printf("\n %d is the greatest number",a);
        }
        else if(b>=a && b>=c)
        {
          printf("\n %d is the greatest number",b);
        }
        else if (c>=a && c>=b)
        {
           printf("\n %d is the greatest number",c);
           break;
         }
        case 4:
        printf("\nenter the number");
        scanf("%d",&num);
        while(num>0)
        {
          r = num%10;
          sum+=r;
          num/=10;
        }
        printf("\n %d \n",sum);
        case 5:
        printf(" \nexit the program");
        break;
        default:
        printf("\nprogram is over");
        }
      }
      while(choice!=5);
      return 0;
      }
