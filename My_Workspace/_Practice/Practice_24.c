/* According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.*/

#include<stdio.h>

int main ()
{  
int base_year = 1900;
int year;
int diff_year;
int leap_year;
int non_leapyear,days;

printf("Enter the year = ");
scanf("%d",&year);

diff_year = (year) - base_year;
leap_year = diff_year/4;
non_leapyear = diff_year - leap_year;

if(year % 4 == 0)
days = (non_leapyear *365) + (leap_year * 366);
else
days =  (non_leapyear *365) + (leap_year * 366) + 1;   //This +1 is for the 1st january of each year


if(days % 7 == 1)
printf("MONDAY\n");
else if(days % 7 == 2)
printf("TUESDAY\n");
else if(days % 7 == 3)
printf("WEDNESDAY\n");
else if(days % 7 == 4)
printf("THURSDAY\n");
else if(days % 7 == 5)
printf("FRIDAY\n");
else if(days % 7 == 6)
printf("SATURDAY\n");
else if(days % 7 == 0)
printf("SUNDAY\n");
else
printf("NA");

return 0;
}