/* Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical
operators && and ||.*/

#include<stdio.h>

int main ()
{  
  int year;
  printf("Enter any year = ");
  scanf("%d",&year);
 
 

  if(((year%4) && 1) == 0)

  printf("Entered year %d is a leap year\n",year);

  else if (((year%4)|| 0) == 1)

  printf("Entered year %d is not a leap year\n",year);

return 0;
}