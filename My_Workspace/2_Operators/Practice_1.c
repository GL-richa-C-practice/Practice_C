#include<stdio.h>

int main ()
{
   int a = 33;
   int b = 15;
   int result = 0;

   //result = a%b;

   printf("Result is %d",++a); // a++ is done after the statement is executed so the result was same as 
   //33 but will change for ++a (same for --)
    return 0;
}