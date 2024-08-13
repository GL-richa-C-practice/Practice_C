/*Two numbers are entered through the keyboard. Write a
program to find the value of one number raised to the power
of another. */

#include<stdio.h>

int main ()
{  

int num_1,num_2;
int pow = 1;
printf("Enter number 1 and 2 : ");
scanf("%d,%d",&num_1,&num_2);

for(int i = 1; i<= num_2; ++i)
pow *= num_1;
printf("%d ^ %d = %d\n",num_1,num_2,pow);

return 0;
}