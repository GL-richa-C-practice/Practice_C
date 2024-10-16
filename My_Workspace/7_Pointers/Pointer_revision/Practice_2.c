// Pointers to ARRAY
#include<stdio.h>



int main()
{
  int arr[5] = {1,2,3,4,5};
  int *ptr = &arr;  // here we have a pointer which pointes to only 1st element of avariable

  printf("%p\n",ptr); // address
  printf("%d\n",*ptr); // value
  return 0;
}


/*OUTPUT - 0064FEB8
           1     */