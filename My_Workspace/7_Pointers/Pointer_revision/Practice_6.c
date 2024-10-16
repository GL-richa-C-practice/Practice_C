// Pointers to ARRAY

#include<stdio.h>

int main()
{
 int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

 int (*ptr)[3][4] = &arr;

 int *p = &arr;

printf("0th element address of the 1st 1-D array = %p\n",ptr);
printf("0th element address of the 1st 1-D array = %p\n",*ptr);


printf("0th element value of the 1st 1-D array = %d\n",*p);

printf("0th element address of the 2nd 1-D array = %p\n",ptr+1);

printf("0th element value of the 2nd 1-D array = %d\n",*p+4);

printf("0th element address of the 3rd 1-D array = %p\n",ptr+2);

printf("0th element value of the 3rd 1-D array = %d\n",*p+8);

  return 0;
}


/*OUTPUT - 0th element address of the 1st 1-D array = 0064FE98
           0th element address of the 1st 1-D array = 0064FE98
           0th element value of the 1st 1-D array = 1
           0th element address of the 2nd 1-D array = 0064FEC8
           0th element value of the 2nd 1-D array = 5
           0th element address of the 3rd 1-D array = 0064FEF8
           0th element value of the 3rd 1-D array = 9*/