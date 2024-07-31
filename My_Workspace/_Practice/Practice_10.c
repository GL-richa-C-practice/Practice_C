/* A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

#include<stdio.h>



int main ()
{
    int amount;
    printf("Enter amount to be withdrawn = ");
    scanf("%d", &amount);

    printf("Amount withdran in denomination of 100 = %d\n", amount/100);
    printf("Amount withdran in denomination of 50 = %d\n", (amount%100)/50);
    printf("Amount withdran in denomination of 10 = %d\n", ((amount%100)%50)/10);
    printf("Amount withdran other than this denomination = %d\n", (((amount%100)%50)%10));

 
return 0;
}