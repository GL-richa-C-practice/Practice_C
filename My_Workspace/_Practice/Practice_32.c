/* A university has the following rules for a student to qualify
for a degree with A as the main subject and B as the
subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or
more in B.
(b) If he gets than 55 percent in A he should get 55 percent or
more in B. However, he should get at least 45 percent in
A.
(c) If he gets less than 45 percent in B and 65 percent or more
in A he is allowed to reappear in an examination in B to
qualify.
(d) In all other cases he is declared to have failed.
Write a program to receive marks in A and B and Output
whether the student has passed, failed or is allowed to
reappear in B.*/

#include<stdio.h>

int main ()
{  
  float main_A, sub_B;
  printf("Enter %% marks for main and subsidiary subject = ");
  scanf("%f,%f",&main_A, &sub_B);

if(sub_B < 45 && main_A >= 65){
    printf("Allow retset in Subsidiary Subject B \n");
}  

if(main_A >= 55 && sub_B >=45)
{
    printf("*********PASSED*********\n");
    }

    else if (main_A >= 45 && sub_B >=55){
        printf("*********PASSED*********\n");
    }

    else if(sub_B < 45 && main_A >= 65){
    printf("Allow retset in Subsidiary Subject B \n");
    }  
    else
    printf("******FAILED******\n");


return 0;
}