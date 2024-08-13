/*Write a program to print all prime numbers from 1 to 300.
(Hint: Use nested loops, break and continue) */

#include<stdio.h>
#include<stdbool.h>
#include<conio.h>

int main ()
{  

int max = 300;
_Bool isPrime;

printf("Prime numbers between 1 to 300 \n");
for(int i = 2; i <= max; i++){

    isPrime = false;  
    for(int j = 2; j<=i/2;j++)
    {
      if(i%j == 0)
      {
        isPrime = true;
        break;
      }
    }
if(isPrime == false)
{
  printf("%d  ", i);
}
}
return 0;
}