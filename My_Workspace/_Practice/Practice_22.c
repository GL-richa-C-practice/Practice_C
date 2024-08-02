/* Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.
(Hint: Use sqrt( ) and pow( ) functions)*/

#include<stdio.h>

int main ()
{  
  int x,y,r;
  printf("Enter cordinates x,y = ");
  scanf("%d,%d", &x,&y);
  printf("Enter radius of circle = ");
  scanf("%d", &r);

  if((x == r)&&(y == r))
  printf("Points %d and %d lie on the circle of radius %d\n", x,y,r);
  else if ((x>r) && (y>r))
  printf("Points %d and %d lie outside of the circle having radius %d\n", x,y,r);
  else if((x<r) && (y<r))
  printf("Points %d and %d lie inside of the circle having radius %d\n", x,y,r);
  else
  printf("NA\n");

    return 0;
}