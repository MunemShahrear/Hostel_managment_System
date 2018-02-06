#include<stdio.h>
int main()
{ printf("\t\t\t\t\t\tMESS APP\n");
int n,i;
char str[20][20];
float diposit[100];
float due[100];
float cost[100];
float meal[100];
float totalcost,totalmeal=0,totaldiposit=0,mealcharge;
printf("\nENTER THE NUMBER OF MEMBERS >> ");
scanf("%d",&n);


for(i=0;i<n;i++)
{   printf("\nENTER THE NAME OF MEMBERS %d >> ",i+1);
   scanf("%s",str[i]);
}
    //details info taking
     for(i=0;i<n;i++)
        {

             printf("\nENTER DIPOSIT BY %s >> ",str[i]);
                scanf("%f",&diposit[i]);

            printf("\nENTER MEAL CONSUME BY %s >> ",str[i]);
                scanf("%f",&meal[i]);

        }
       //account start here
        for(i=0;i<n;i++)
            {
                totaldiposit=totaldiposit+diposit[i];
                totalmeal=totalmeal+meal[i];
            }
          printf("\nENTER TOTAL MARKET COST >> ");
          scanf("%f",&totalcost);

         mealcharge=totalcost/totalmeal;


printf("\n\t\t\t\t\t\tFINAL ACCOUNT\n");

            printf("\n\nMEAL CHARGE IS %f",mealcharge);
             printf("\n\nTOTAL MEAL  %f",totalmeal);
              printf("\n\nTOTAL DIPOSIT  %f",totaldiposit);
               printf("\n\nTOTAL MARKET COST  %f",totalcost);

//final count of cost
         for(i=0;i<n;i++)
            {
                cost[i]=meal[i]*mealcharge;
                due[i]=diposit[i]-cost[i];
                if(due[i]<0)
                {
                    printf("\n\n%s HAS TO PAY >> %f",str[i],due[i]*-1);
                }
                else if(due[i]>0)
                {
                    printf("\n\n%s HAS TO TAKE >> %f",str[i],due[i]);
                }
                else
                     {
                    printf("\n\n%s DON'T HAS TO PAY");
                     }
            }
           if(totaldiposit>totalcost)

            {
             printf("\n\nMANEGER HAS TO PAY >> %f",totaldiposit-totalcost);
            }

return 0;
}
