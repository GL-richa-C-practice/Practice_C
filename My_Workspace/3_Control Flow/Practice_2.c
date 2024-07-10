// to implement sign function
// else if condition

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main ()
{
    int no_to_test, sign;

    printf("Enter number to be tested: ");
    scanf("%d" , &no_to_test);

    if (no_to_test < 0)
    {
      sign = -1;
    }
    else if (no_to_test == 0)
    {
      sign = 0;
    }
    else
    {
       sign = 1;
    }
    printf("Sign of the no is : %d \n", sign);
   return 0;
}