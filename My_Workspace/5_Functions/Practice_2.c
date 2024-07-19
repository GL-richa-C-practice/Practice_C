//Functions
#include<stdio.h>

int multiplyTowNumbers(int x, int y)
{
   int result = x*y;
   return result;
}

int main ()
{
   int temp = 0; // in the example they have use the the same variable name result
   int number_1;
   int number_2;
   printf("number_1 = ");
   scanf("%d", &number_1);

   printf("number_2 = ");
   scanf("%d", &number_2);

   temp = multiplyTowNumbers(number_1,number_2);

   printf("result = %d\n", temp);
   return 0;
}

