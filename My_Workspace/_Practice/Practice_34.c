/*Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a
special symbol or not. */

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
Ascii_val >= 97 && Ascii_val<= 122? printf("Lower case alphabet\n"):(Ascii_val >=0 && Ascii_val <=47)||(Ascii_val >= 58 && Ascii_val <=64)||(Ascii_val >= 91 && Ascii_val <= 96) || 
(Ascii_val >= 123 && Ascii_val <= 127)? printf("Special symbols\n"): printf("Nither lower case alphabets nor special symbol");                                                                    


return 0;
}