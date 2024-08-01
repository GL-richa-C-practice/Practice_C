/* A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.*/

#include<stdio.h>

int main ()
{
   int n,d1,d2,d3,d4,d5,rev_n,Diff;

   printf("Enter a 5-digit number = ");
   scanf("%d", &n);

   d1 = n%10;
   n = n/10;
   printf("d1 =%d\n",d1);
   d2 = n%10;
   n=n/10;

   d3 = n%10;
   n=n/10;

   d4 = n%10;
   n=n/10;

   d5 = n%10;
   n = n/10;

   rev_n = (d1 * 10000) + (d2 * 1000) + (d3 * 100) + (d4 * 10) + d5;
   printf("Reverse output = %d\n", rev_n);
 //reset n
   n = (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
   Diff = n - rev_n;
   printf("n = %d\n",n);
   printf("rev_n = %d\n",rev_n);
   printf("Diff = %d\n",Diff);

   if(Diff == 0)
   printf("Original number %d is equal to reverse number %d\n", n,rev_n);
   else
   printf("Original number %d is not equal to reverse number %d\n", n,rev_n);

   
    return 0;
}