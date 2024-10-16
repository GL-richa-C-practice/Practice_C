// Pointers to ARRAY
#include<stdio.h>



int main()
{
  int arr[5] = {1,2,3,4,5};
  int *ptr = &arr[0];

  
  for (int i = 0; i<5; i++){
    printf("%d ",*(ptr+i));
  
  }

  
  return 0;
}


/*OUTPUT - 1 2 3 4 5  */