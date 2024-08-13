/*Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered. */

#include<stdio.h>

int main ()
{  
  int input, user_wish,count = 0,count_pos = 0,count_neg = 0;
  printf("Enter user wish  = ");
  scanf("%d",&user_wish);

  while(user_wish != 0){
    printf("Enter numbers = ");
    scanf("%d",&input);
    if (input == 0)
        count++;
    else if(input > 0)
    count_pos++;
    else if (input < 0)
    count_neg++;    
    else
    printf("NA \n");
    user_wish--;
    
    printf("user_wish = %d\n",user_wish);

  }
  printf("Count for zero = %d\n", count);
  printf("Count for Positive numbers = %d\n", count_pos);
  printf("Count for negative numbers = %d\n", count_neg);

return 0;
}