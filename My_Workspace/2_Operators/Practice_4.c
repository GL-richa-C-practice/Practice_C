//bitwise operator

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   unsigned int a = 60; // 0011 1100
   unsigned int b = 13; // 0000 1101

   int result = 0;

   //result =  a & b;
   //result =  a | b;
   //result =  a ^ b;
   result =  ~a; // 1's complement
   //result =  a << 4;
   //result =  a >> 4;

   printf("Result : %d", result);


  

   
   return 0;
}