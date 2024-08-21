//pointers
#include<stdio.h>
#include <stddef.h>

int main ()
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number's address : %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;
    printf("pnumber's address: %p\n", (void*)&pnumber); // address of pointer
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));// size of pointer location
    printf("pnumber's value: %p\n\n", pnumber); // address where pointer is pointing to
    printf("value pointed to: %d\n\n", *pnumber); // value it is pointing to



    return 0;
}