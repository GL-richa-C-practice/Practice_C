/* Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/

#include<stdio.h>

int main ()
{
   int year,leap_year;

   printf("Enter year: ");
   scanf("%d",&year);

   leap_year = year % 4;

   if(leap_year == 0)
   printf("Entered year %d is a leap year\n", year);
   else
   printf("Entered year %d is not a leap year\n", year);
   
    return 0;
}