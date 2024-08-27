//pointers
#include<stdio.h>
#include <stddef.h>

int main ()
{
   int temp = 55;
   int *ptemp = NULL;

   ptemp = &temp;
    
    printf("number's address : %p\n", &temp);
    printf("pnumber's address: %p\n", (void*)&ptemp); // address of pointer
    printf("pnumber's value: %p\n\n", ptemp); // address where pointer is pointing to
    printf("value pointed to: %d\n\n", *ptemp); // value it is pointing to

    return 0;
}