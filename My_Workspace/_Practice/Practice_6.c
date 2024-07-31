/* Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/

#include<stdio.h>



int main ()
{

    int C,D;
    
    printf("******INPUT******\n");
    printf("C = ");
    scanf("%d", &C);

    printf("D = ");
    scanf("%d", &D); 

    C = C + D;
    D = C - D;
    C = C - D;
    printf("******OUTPUT******\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);



    return 0;
}