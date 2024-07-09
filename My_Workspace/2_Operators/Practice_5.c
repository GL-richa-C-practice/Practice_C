//sizeof operator

#include<stdio.h>
#include<stdbool.h>

int main ()
{
    int a, temp;
    char b;
    temp  = sizeof(b+a);
    printf("Variable of type int occupy %zd \n", temp);

/************************************ 2 ways of doing*************************************************************/

   printf("Variable of type char occupy %zd \n", sizeof(char));
   printf("Variable of type short occupy %zd \n", sizeof(short));
   printf("Variable of type int occupy %zd \n", sizeof(int));
   printf("Variable of type long occupy %zd \n", sizeof(long));
   printf("Variable of type long long occupy %zd \n", sizeof(long long));
   printf("Variable of type float occupy %zd \n", sizeof(float));
   printf("Variable of type double occupy %zd \n", sizeof(double));
   printf("Variable of type long double occupy %zd \n", sizeof(long double));
   return 0;
}