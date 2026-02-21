 #include<stdio.h>
 int main()
 {
        int MATHS , PPS , ETC , FAI , EGD;
        int sum;
        int percentage;
        printf("\n ENTER THE MARKS OF MATHS \n");
        scanf("%d", &MATHS);
         printf("\n ENTER THE MARKS OF PPS \n");
        scanf("%d", &PPS);
         printf("\n ENTER THE MARKS OF ETC \n");
        scanf("%d", &ETC);
         printf("\n ENTER THE MARKS OF FAI \n");
        scanf("%d", &FAI);
         printf("\n ENTER THE MARKS OF EGD \n");
        scanf("%d", &EGD);
        sum=MATHS+PPS+ETC+FAI+EGD;
        percentage=sum*100/500;
        printf("\nTOTAL SUM=%d",sum);
        printf("\nPERCENTAGE=%d",percentage);
        if(percentage>=90)
        {
            printf("\nGRADE A");
        }
       else if(percentage>=75)
        {
            printf("\nGRADE B");
        }
       else if(percentage>=60)
        {
            printf("\nGRADE C");
        }
       else if(percentage>=40)
        {
            printf("\nGRADE D");
        }
        else
        {
            printf("\nFAIL");
        }
        return 0;
        }
