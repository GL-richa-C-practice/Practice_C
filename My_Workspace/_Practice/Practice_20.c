/* Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/

#include<stdio.h>

int main ()
{  
  int rec_lenght,rec_breath,rec_area,rec_perimeter;

  printf("Enter length of rectangle = ");
  scanf("%d", &rec_lenght);

  printf("Enter breath of rectangle = ");
  scanf("%d", &rec_breath);

  rec_area = rec_lenght * rec_breath;
  printf("Area of rectangle = %d\n", rec_area);

  rec_perimeter = 2*(rec_lenght + rec_breath);
  printf("Perimeter of rectangle = %d\n", rec_perimeter);

  if(rec_area > rec_perimeter)
  printf("**********AREA OF RECTANGLE IS GREATER THAN ITS PEREMETER***********\n");
  else
  printf("**********AREA OF RECTANGLE IS  NOT GREATER THAN ITS PEREMETER***********\n");

  
    return 0;
}