//Functions

#include<stdio.h>
void multiply (int x, int y)
{
     int result = x*y;
     printf(" %d x %d = %d\n", x,y,result);
}
int main ()
{
   multiply(200,300);
   multiply(88,22);
   multiply(23,24);
   return 0;
}

