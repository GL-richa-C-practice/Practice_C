/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/

#include<stdio.h>

int main ()
{  
  int x1,x2,x3,y1,y2,y3;
  float m_1,m_2; //slope 

  printf("Enter first co-ordinate x1, y1 = ");
  scanf("%d,%d",&x1,&y1);

  printf("Enter second co-ordinate x2, y2 = ");
  scanf("%d,%d",&x2,&y2);

  printf("Enter third co-ordinate x3, y3 = ");
  scanf("%d,%d",&x3,&y3);

  m_1 = ((y2 - y1)/(x2 - x1));
  printf("Slope_1 = %.2f\n", m_1);

  m_2 = ((y3-y2)/(x3-x2));
  printf("Slope_2 = %.2f\n", m_2);

  if(m_1 == m_2)
  printf("All the three points (%d,%d), (%d,%d), (%d,%d) lie on the same line\n",x1,y1,x2,y2,x3,y3);
  else
  printf("All the three points (%d,%d), (%d,%d), (%d,%d) are not lying on the same line\n",x1,y1,x2,y2,x3,y3);
  
    return 0;
}