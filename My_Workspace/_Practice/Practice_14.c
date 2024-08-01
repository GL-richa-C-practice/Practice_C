/* Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.*/

#include<stdio.h>

int main ()
{
   int num,x;
   
   printf("Enter an integer:");
   scanf("%d", &num);

   x = num%2;

   if(x == 0)
   printf("Entered number %d is even\n", num);
   else
   printf("Entered number %d is odd\n", num); 
   
    return 0;
}