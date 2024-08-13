/*Write a program to find the greatest of the three numbers
entered through the keyboard using conditional operators. */

#include<stdio.h>

int main ()
{  
int a, b,c;
printf("Enter three numbers = ");
scanf("%d,%d,%d", &a,&b,&c);
(a>b && a>c)? printf("a %d is the greatest\n",a):(b>a && b>c)? printf("b %d is the greatest\n",b): (c>b && c>a)?
printf("c %d is the greatest\n",c):printf("NA\n");

return 0;
}