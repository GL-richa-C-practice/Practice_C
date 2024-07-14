// Switch statement

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
   enum Weekday today;

   printf("What day is today: \n"); 
   scanf("%d" , &today);

  // printf("Today is : %d \n", today);

   switch(today){
      case Sunday:
      printf("Today is Sunday.");
      break;

      case Monday:
      printf("Today is Monday.");
      break;

      case Tuesday:
      printf("Today is Tuesday.");
      break;

      default:
      printf("Whatever");
      break;
   }

   

   return 0;
}