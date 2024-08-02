/* Find the absolute value of a number entered through the
keyboard.*/

#include<stdio.h>

int main ()
{  
   int a;
   int abs_val;

   printf("Enter a number : ");
   scanf("%d", &a);

   if(a < 0){
   abs_val = a * (-1);
   printf("Absolute val = %d\n", abs_val);
   printf("Absolute value of %d = %d\n", a,abs_val);
   }
   else if (a>0)
   printf("Absolute value is same as number entered = %d\n", a );

    return 0;
}