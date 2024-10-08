/* A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.*/

#include<stdio.h>
#include<stdbool.h>

int main ()
{ 
  int grade; 
  float H_s,CC_s,TS_s; 

  printf("Hardness of steel = ");
  scanf("%f", &H_s);

  printf("Carbon content of steel = ");
  scanf("%f", &CC_s);

  printf("Tensile Strength of steel = ");
  scanf("%f", &TS_s);
  
  int h_f=0, cc_f=0, ts_f=0; 
  if(H_s > 50)
  h_f = 1;
  if(CC_s < 0.7)
  cc_f = 1;
  if(TS_s > 5600)
  ts_f = 1;

  if(h_f == 0 && cc_f == 0 && ts_f ==0)
  grade = 5;

  if(h_f == 1 || cc_f == 1 || ts_f ==1)
  grade = 6;

  if(h_f == 1 && cc_f == 0 && ts_f ==1)
  grade = 7;

  if(h_f == 0 && cc_f == 1 && ts_f ==1)
  grade = 8;

  if(h_f == 1 && cc_f == 1 && ts_f ==0)
  grade = 9;

  if(h_f == 1 && cc_f == 1 && ts_f ==1)
  grade = 10;

  printf("The grade of steel = GRADE %d\n",grade);  
return 0;
}