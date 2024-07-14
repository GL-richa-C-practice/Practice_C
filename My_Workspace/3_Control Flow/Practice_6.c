// For Loop

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   int i , j;
   for (i = 1,j = 2; i<=5; ++i,j=j+2)
   printf("%5d", i*j);

   return 0;
}