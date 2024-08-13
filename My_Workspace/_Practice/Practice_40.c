/*Write a program to print all the ASCII values and their
equivalent characters using a while loop. The ASCII values
vary from 0 to 255. */

#include<stdio.h>

int main ()
{  
  char ASCII;
  while(ASCII >= 0 && ASCII <=255)
  {
    printf("%c",ASCII);
    ASCII ++;
  }

return 0;
}