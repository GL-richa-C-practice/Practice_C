//Array notation
#include<stdio.h>
#include <stddef.h>
int sumArray(int arraySum[], const int n){
  int sum  = 0, *ptr;
  int *const ptrArrayEnd = arraySum + n;
  for (ptr = arraySum; ptr <= ptrArrayEnd; ptr++)
  {
    sum += *ptr;
  }
  return sum;
}
int main (void)
{
   int sumArray(int arraySum[], int const n);
   int values[10] = {6,9,12,5,6,28,54,23,55,22};
   printf("Sum = %d\n", sumArray(values,10));
    return 0;
}