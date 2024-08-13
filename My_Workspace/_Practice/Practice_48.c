/*Write a program to add first seven terms of the following
series using a for loop:
1/1!
2/2!
3/3!
…… */

#include<stdio.h>

int main ()
{  

float fact = 1;
float sum = 0;



for(int i = 1; i <= 7; i++){
   for(int j = 1; j<=i; j++){
         fact = j * fact;
         
   }
printf("Factorial %d = %f\n", i,fact);

sum = sum +  i/fact; 

}
printf("sum of series = %f\n", sum);   

return 0;
}