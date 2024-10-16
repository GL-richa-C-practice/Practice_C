// Pointers to ARRAY
// data_type (*var_name)[size of array];
// EXAMPLE - int (*ptr)[10];
/*Since subscript have higher precedence than indirection, it is necessary to enclose the indirection operator 
and pointer name inside parentheses. Here the type of ptr is ‘pointer to an array of 10 integers.*/
#include<stdio.h>

int main()
{
  int *p;

  int(*ptr)[5];
  int arr[5];

  // Points to 0th element

  p = &arr;

  //Points to the whole array

  ptr = &arr;

  printf("p = %p, ptr = %p \n", p, ptr);
  p++;
  ptr++;

  printf("p = %p, ptr = %p\n", p,ptr);



  
  return 0;
}


/*OUTPUT - p = 0064FEB4, ptr = 0064FEB4 
           p = 0064FEB8, ptr = 0064FEC8 */