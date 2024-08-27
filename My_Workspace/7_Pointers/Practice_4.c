//Using Const
#include<stdio.h>
#include <stddef.h>

int main ()
{
    int value = 65;
    int number = 25;
    //int *pval = NULL;

    //const int *pval = &value;// value will never change
    //int *const pval = &value; // memory address will never change
    const int *const pval = &value;// memory and value both are constant
    printf("*address = %p\n", (void*)pval);
    printf("*pvalue = %d\n", *pval);
    //pval = &number;
    
    //printf("********address = %p\n", (void*)pval);
    return 0;
}