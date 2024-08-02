/* Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).*/

#include<stdio.h>

int main ()
{  
  int x,y;
  
  printf("Enter cordinates x,y = ");
  scanf("%d,%d",&x,&y);

  if(x == 0)
  printf("Points %d and %d lie on y-axis\n",x,y);
  else if(y==0)
  printf("Points %d and %d lie on x-axis\n",x,y);
  else if(x==0 && y ==0)
  printf("Points %d and %d lie origin\n",x,y);
  else
  printf("NA\n");
  
    return 0;
}