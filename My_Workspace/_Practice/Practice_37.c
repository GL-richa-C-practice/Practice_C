/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour. */

#include<stdio.h>

int main ()
{  

int working_hrs, overtime_pay,employee_count;

for(employee_count = 1; employee_count <=10; employee_count++){
printf("Enter workoing hours of the employee no %d: ", employee_count);
scanf("%d", &working_hrs);

if (working_hrs > 40){
 
 overtime_pay = (working_hrs - 40)*12;
 printf("Overtime for the employee = %d\n",overtime_pay);

}
else
    printf("No overtime done by the employee\n");
    
}




return 0;
}