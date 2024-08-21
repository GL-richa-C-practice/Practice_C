/*Write a program to fill the entire screen with diamond and
heart alternatively. The ASCII value for heart is 3 and that of
diamond is 4.*/
#include<stdio.h>
#include<conio.h>
int main()
{ 
     
  int max_heart = 500;
  int max_diamond = 500;
  for(int i = 0; i<= max_heart; i++)
  {
   for(int j = 0; j <= max_diamond; j++){
   }
   printf("%c%c",3,4);
  }
   

    return 0;
}