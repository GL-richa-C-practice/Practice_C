/* If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include<stdio.h>

int main ()
{  
  int age_Ram, age_Shyam, age_Ajay;

  printf("Enter age of Ram = ");
  scanf("%d", &age_Ram);
  printf("Enter age of Shyam = ");
  scanf("%d", &age_Shyam);
  printf("Enter age of Ajay = ");
  scanf("%d", &age_Ajay);

  if((age_Ram>age_Ajay)&&(age_Shyam>age_Ajay))
  printf("Ajay is youngest = %d\n",age_Ajay);
  else if((age_Ram>age_Shyam)&&(age_Ajay>age_Shyam))
  printf("Shayam is youngest = %d\n",age_Shyam);
  else if((age_Shyam>age_Ram)&&(age_Ajay>age_Ram))
  printf("Ram is youngest = %d\n",age_Ram);
  
    return 0;
}