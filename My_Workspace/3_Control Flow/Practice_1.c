// to find if the no is even or odd
// if condition

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main ()
{
    int no_to_test, remainder;

    printf("Enter number to be tested: ");
    scanf("%d" , &no_to_test);

    remainder = no_to_test % 2;

    if (remainder == 0)
    {
      printf("No is even .\n");
    }
    else {
      printf("No is odd .\n");   
    }
   return 0;
}