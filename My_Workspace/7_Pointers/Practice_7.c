//Using void
#include<stdio.h>
#include <stddef.h>
void square(float*x){
   
    *x = (*x) * (*x);
    return;
}

int main ()
{
    float num;
    printf("Enter number for doing square = ");
    scanf("%f",&num);

    printf("Value of a =  %f\n",num);
    

    square(&num);

    printf("Square of given number is = %f\n",num);
    
    
    return 0;
}