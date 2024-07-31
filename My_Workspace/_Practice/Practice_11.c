/* If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/

#include<stdio.h>

int main ()
{
    float selling_price, cost_price_perItem, profit;

    printf("Selling price of 15 items = ");
    scanf("%f", &selling_price);

    printf("Profit on 15 items = ");
    scanf("%f", &profit);

    cost_price_perItem = (selling_price - profit)/15;

    printf("Cost Price per item = %.2f\n", cost_price_perItem); 

 
return 0;
}