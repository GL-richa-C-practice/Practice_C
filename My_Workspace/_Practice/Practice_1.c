/* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>

#define DA 0.4
#define HRA 0.2

int main ()
{
     float Gross_salary;
     float Basic_salary;

     printf("Enter Basic salary for Ramesh = ");
     scanf("%f",&Basic_salary);

     Gross_salary = Basic_salary + (DA * Basic_salary) + (HRA * Basic_salary);

     printf("Salary of Ramesh  = %.2f\n", Gross_salary);

    return 0;
}