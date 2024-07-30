//Functions

#include<stdio.h>

int calculateGCD (int x, int z)
{
     
     int gcd;
     for(int i = 1; (i <= x) && (i <= z); i++)
     {
        if (x % i ==  0 && z % i == 0)
        gcd = i;  
     }

return gcd;

}

float calculateAbsValue (float y)
{
   float abs_val;
   if(y < 0)
   abs_val = (-1)*y;

   return abs_val;

}

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
   
   int num_1 = 0, num_2 = 0, result = 0;
   float num_3 = 0, absolute_val = 0, sqrtRoot_val = 0;
   float num_4 = 0;
   
   printf("Enter 1st number: ");
   scanf("%d", &num_1);

   printf("Enter 2nd number: ");
   scanf("%d", &num_2);

    printf("Enter 3rd number: ");
   scanf("%f", &num_3);

    printf("Enter 4th number: ");
   scanf("%f", &num_4);
   
    result = calculateGCD (num_1,num_2);
    absolute_val = calculateAbsValue(num_3);
    sqrtRoot_val = calculateSquareRoot(num_4);
    

    printf("GCD for %d and %d = %d\n", num_1, num_2, result); 

    printf("Absolute value of %f = %f\n", num_3, absolute_val);

    printf("Square Root of %f = %.5f\n", num_4, sqrtRoot_val);

   return 0; 
}

