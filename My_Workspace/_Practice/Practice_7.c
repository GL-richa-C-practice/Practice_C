/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.

If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

#include<stdio.h>

int main ()
{
 int n,d1,d2,d3,d4,d5;
 int sum;
 int reverse;

 printf("Enter 5-digit number = ");
 scanf("%d", &n);

 d1 = n%10;
 n = n/10;
 printf("d1 = %d\n",d1);
 d2 = n%10;
 n = n/10;
 printf("d2 = %d\n",d2);
 d3 = n%10;
 n = n/10;
 printf("d3 = %d\n",d3);
 d4 = n%10;
 n = n/10;
 printf("d4 = %d\n",d4);
 d5 = n%10;
 n = n/10;
 printf("d5 = %d\n",d5);
    
sum = d1 + d2 + d3 + d4 + d5;

printf("Sum of 5-digit number = %d\n",sum);

reverse = (d1*10000) + (d2*1000) + (d3*100) + (d4*10) + d5;

printf("Reverse the 5 digit number and print  = %d\n", reverse);
    return 0;
}