/* If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

#include<stdio.h>

int main ()
{
   float selling_price, cost_price,Diff;

   printf("Enter cost price = ");
   scanf("%f", &cost_price);
   
   printf("Enter selling price = ");
   scanf("%f", &selling_price);
   
   Diff = selling_price - cost_price;

   if(Diff > 0)
   printf("Seller has made profit, PROFIT_VAL = %.2f\n",Diff);
   
   else if (Diff < 0)
   printf("Seller has faced loss, LOSS_VAL = %.2f\n",Diff * (-1));
   
    return 0;
}