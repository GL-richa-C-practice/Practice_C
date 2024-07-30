//Functions

#include<stdio.h>

float calculateSquareRoot (float r)
{
   if (r < 2)
    return r;
   
   float t = r;
   float s_q = (t + (r / t)) / 2;

   while(t - s_q >= 0.00001){
      t = s_q;
      s_q = (t + (r / t)) / 2;
   }
   return s_q;
}

int main()
{   
   
  
   float num_3 = 0, sqrtRoot_val = 0;
  
   
   printf("Enter 3rd number: ");
   scanf("%f", &num_3);

    sqrtRoot_val = calculateSquareRoot(num_3);
    
    printf("Square Root of %f = %.5f\n", num_3, sqrtRoot_val);

   return 0; 
}

