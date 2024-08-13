/*Write a program to find the range of a set of numbers. Range
is the difference between the smallest and biggest number in
the list.*/

#include<stdio.h>
#include<limits.h>

int main ()
{  


int num_set,num;

int max = 0, min = 0;
printf("Enter the num set for checking range =");
scanf("%d",&num_set);

for(int i = 1; i <= num_set; i++){
printf("Enter number %d = ",i);
scanf("%d",&num);

if(num > max)
max = num;
else min = num;

}

printf("range = %d - %d\n",min,max);


return 0;
}