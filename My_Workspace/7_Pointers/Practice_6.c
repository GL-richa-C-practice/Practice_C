//Using void
#include<stdio.h>
#include <stddef.h>
void swap(int*x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main ()
{
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n",a);
    printf("Before swap, value of b: %d\n",b);

    swap(&a,&b);

    printf("after swap, value of a: %d\n",a);
    printf("after swap, value of b: %d\n",b);

    return 0;
}