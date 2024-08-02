/* Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters.
Characters ASCII Values
A – Z
a – z
0 – 9
special symbols
65 – 90
97 – 122
48 – 57
0 - 47, 58 - 64, 91 - 96, 123 - 127*/

#include<stdio.h>

int main ()
{  
char x;
int Ascii_val;
printf("Enter any character :");
scanf("%c",&x);
printf("x = %c\n",x);
Ascii_val = x;

printf("Ascii value is %d\n",Ascii_val);


if(Ascii_val >=65 && Ascii_val <= 90)
printf("Entered character %c is a capital letter\n",x);

else if(Ascii_val >=97 && Ascii_val <= 122)
printf("Entered character %c is a small letter\n",x);

else if(Ascii_val >=48 && Ascii_val <= 57)
printf("Entered character %c is a digit\n",x);

else if((Ascii_val >=0 && Ascii_val <= 47)||(Ascii_val >=58 && Ascii_val <= 64)||
(Ascii_val >=91 && Ascii_val <= 96)||(Ascii_val >=123 && Ascii_val <= 127))
printf("Entered character %c is a special character\n",x);

return 0;
}