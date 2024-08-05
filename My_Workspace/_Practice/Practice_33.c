/* The policy followed by a company to process customer orders
is given by the following rules:
(a) If a customer order is less than or equal to that in stock
and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him
intimation.
(c) If has credit is Ok but the item in stock is less than has
order, supply what is in stock. Intimate to him data the
balance will be shipped.
Write a C program to implement the company policy.*/

#include<stdio.h>

int main ()
{  
int order,stock,balance;
int credit;
printf("Enter Order and Stock and credit details :");
scanf("%d,%d,%d",&order,&stock,&credit);

if(order <= stock && credit == 1){
printf ("SUPPLY HAS REQUIREMENT\n");}

else if(credit != 1){
printf("NO SUPPLY FOR NOW PLEASE INTIMATE THE CUSTOMER\n");}

else if(credit == 1 && order > stock){
balance = order - stock;
printf("ORDER WILL BE FULFILLED WITH EXISTING STOCK AND REMAINING %d WILL BE SHIPPED LATER\n",balance);}


return 0;
}