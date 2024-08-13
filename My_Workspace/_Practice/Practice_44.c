/*Write a program to find the octal equivalent of the entered
number.*/

#include<stdio.h>

int main ()
{  

int num,oct_num = 0,rem = 0,oct_conversion = 0; 
printf("Entered no to be converted = ");
scanf("%d",&num);

while(num >= 8){
rem = num%8;
num = num/8;
oct_num = (oct_num*10)+rem;
printf("octal num 1 = %d\n",oct_num);
printf("num = %d\n",num);
}
oct_num = (oct_num * 10)+num;
printf("remainder = %d\n octal num = %d\n",rem,oct_num);
//To print in reverse order
while(oct_num != 0){
    rem = oct_num %10;
    oct_num = oct_num /10;
    oct_conversion = (oct_conversion * 10)+rem;
}
printf("Octal equivalent for %d is = %d\n", num,oct_conversion);

return 0;
}