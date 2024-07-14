// For Loop

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   int i, sum = 0, count;

   printf("Enetr no till which counting should happen : ");

   scanf("%d", &count);

   printf("Count = %d\n", count);

   for (i = 1; i<=count; ++i)
{ 
   printf("inside loop"); // how may times the loop has been executed
   sum += i;
}

   printf("Sum of first %d number is equal to %d\n", count, sum);

   return 0;
}