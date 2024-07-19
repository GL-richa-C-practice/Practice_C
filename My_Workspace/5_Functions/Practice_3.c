//Functions

#include<stdio.h>
#include<math.h>


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

int calculateAbsValue (int y)
{
   int abs_val;
   if(y < 0)
   abs_val = (-1)*y;

   return abs_val;

}

int calculateSquareRoot (int r)
{
   float sqrt_val;
   if(r<0)
   {
   sqrt_val = -1.0;}
   else{
   sqrt_val = sqrt(r);}
   return sqrt_val;
}

int main()
{   
   
   int num_1 = 0, num_2 = 0, num_3 = 0, result = 0, absolute_val = 0;
   float sqrtRoot_val = 0;
   int num_4 = 0;
   
   printf("Enter 1st number: ");
   scanf("%d", &num_1);

   printf("Enter 2nd number: ");
   scanf("%d", &num_2);

    printf("Enter 3rd number: ");
   scanf("%d", &num_3);

    printf("Enter 4th number: ");
   scanf("%d", &num_4);
   
    result = calculateGCD (num_1,num_2);
    absolute_val = calculateAbsValue(num_3);
    sqrtRoot_val = calculateSquareRoot(num_4);
    

    printf("GCD for %d and %d = %d\n", num_1, num_2, result); 

    printf("Absolute value of %d = %d\n", num_3, absolute_val);

    printf("Square Root of %d = %.5f\n", num_4, sqrtRoot_val);

   return 0; 
}

