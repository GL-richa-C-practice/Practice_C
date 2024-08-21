/*Write a program to produce the following output:
     1
    2 3
   4 5 6
 7 8 9 10*/

#include<stdio.h>

int main ()
{  
int k = 1;

for(int i = 1; i<=4;i++)//no of rows
{
  for(int j = 1; j<=4-i;j++)
  {
    printf(" ");
  }
  for(int l = 1;l<=i;l++)
  {
    printf("%d ",k++);
  }
  printf("\n");
}

return 0;
}