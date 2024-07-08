//challenge no of minuites to days and years

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   int minutes;
   int minutes_in_year;
   int day;
   int minute_in_day;
   int remaining_minutes;
   int year;

   printf("Enter no of minuites : ");
   scanf("%d", &minutes);

   printf("User input for minuites: %d \n ", minutes);

   minutes_in_year = ((60*24)*365);

   printf("Minuites in year: %d \n ", minutes_in_year);

   minute_in_day = (60*24);

   printf("Minuites in day: %d \n", minute_in_day);

   year = minutes/minutes_in_year;
   remaining_minutes = (minutes) % (minutes_in_year);
   day  = remaining_minutes/minute_in_day;
   

   printf("%d Minutes is approximately %d years and %d days", minutes,year,day);


  

   //printf(); 
   return 0;
}