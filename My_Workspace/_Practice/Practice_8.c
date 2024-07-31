/* If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

#include<stdio.h>

int main ()
{
 int n,d1,d4;
 int sum;
 

 printf("Enter 4-digit number = ");
 scanf("%d", &n);

 d1 = n%10;
 n = n/1000;
 printf("First digit d1 = %d\n",d1);
 
 d4 = n%10;
 printf("Last digit d4 = %d\n",d4);
 
sum = d1 + d4;
printf("Sum of first and last number = %d\n",sum);

return 0;
}