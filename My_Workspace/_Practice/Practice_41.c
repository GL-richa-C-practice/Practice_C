/*Write a program to print out all Armstrong numbers between
1 and 500. If sum of cubes of each digit of the number is
equal to the number itself, then the number is called an
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5
* 5 ) + ( 3 * 3 * 3 ) */

#include<stdio.h>

int main ()
{  

int num, rem = 0, sum = 0,temp,i;
float cube;
num = 1;
temp = 1;

for(i = 1; i <= 500; i++){

   while(num != 0){
      rem = num%10;
      cube = rem * rem * rem;
      sum += cube;
      num = num /10;
   }
   
   if(sum == temp)
   printf("Armstrong number = %d\n", temp);
    
   rem = 0;
   sum = 0;
   cube = 0;

   temp = i + 1;
   num = i + 1;
}

return 0;
}