/*Write a program to find the factorial value of any number
entered through the keyboard.*/

#include<stdio.h>

int main ()
{  

int num,fact = 1;
printf("Enter any number = ");
scanf("%d", &num);

for(int i = 1; i <= num; i++)
fact *= i;

printf("Fctorial of %d is = %d", num, fact);

return 0;
}