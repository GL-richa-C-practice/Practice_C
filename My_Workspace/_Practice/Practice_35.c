/*Write a program using conditional operators to determine
whether a year entered through the keyboard is a leap year or
not. */

#include<stdio.h>

int main ()
{  

int year;
printf("Enter the year = ");
scanf("%d", &year);

(year % 4 == 0)? printf("%d year is a leap year \n",year):printf("Not a leap year\n");

return 0;
}