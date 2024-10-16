// Pointers to ARRAY
/*So whenever a pointer to an array is dereferenced, we get the base address of the array to which it points.*/
#include<stdio.h>

int main()
{
  int arr[] = {3,6,8,6,2};

  int *p = &arr;
  int(*ptr)[5] = &arr;

  printf("p = %p, ptr = %p\n",p,ptr);
  printf("p = %d, ptr = %d\n",*p,*ptr);

  printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",sizeof(p),sizeof(*p));
  printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",sizeof(ptr),sizeof(*ptr));
  return 0;
}


/*OUTPUT - p = 0064FEB4, ptr = 0064FEB4
           p = 3, ptr = 6618804
           sizeof(p) = 4, sizeof(*p) = 4
           sizeof(ptr) = 4, sizeof(*ptr) = 20*/