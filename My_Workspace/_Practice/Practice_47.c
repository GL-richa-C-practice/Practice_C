/*Write a program to fill the entire screen with a smiling face.
The smiling face has an ASCII value 1.*/

#include<stdio.h>

int main ()
{  
  int max = 10000;
  for(int i = 0; i<= max; i++)
  {
    printf("%c",1);
  }

return 0;
}