// Challange calculate salary 

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main ()
{
   float working_hrs;
   float overtime;
   float gross_pay;
   float extra_hours;
   float tax;
   float net_pay;

   printf("Enter working hours: ");
   scanf("%f", &working_hrs); 

   printf("working hours entered %.2f \n", working_hrs);
   
   overtime = 12.00*1.5; //per hour
   //printf("overtime =  %.2f \n ", overtime);

// Gross pay calculation
   
   extra_hours = working_hrs-40;

   if(working_hrs > 40)
   {
      gross_pay = (40*12)+(extra_hours * overtime);
   }
   else {
      gross_pay = working_hrs * 12.00;
   }

   printf("Gross_Pay =  %.2f \n", gross_pay);

// Taxation

float tax_1 = 0.15 * gross_pay; // 15% slab
float tax_2 = (0.2 * (gross_pay - 300))+(0.15*300); // 20% slab
float tax_3 = (0.25*(gross_pay - 450))+(0.15*300)+(0.2+150); // 25% slab

//printf("Tax_1 = %.2f \n", tax_1);
//printf("Tax_2 = %.2f \n", tax_2);
//printf("Tax_3 = %.2f \n", tax_3);

  if(gross_pay <= 300)
  {
    tax = tax_1;
  }
  else if (gross_pay > 300 && gross_pay <= 450)
  {
    tax = tax_2;
  }
  else{
    tax = tax_3;
  }
  printf("Tax = %.2f \n", tax);

  //Net pay calculation

net_pay = gross_pay - tax;

printf("Net_Pay = %.2f \n", net_pay);

   return 0;
}