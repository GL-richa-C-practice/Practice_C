/*Usage of format sepecifier*/

#include<stdio.h>
#include<stdbool.h>
 
int main ()
{
    
int x = 100;
float y = 331.75f;
double z  = 8.44e+11;
char charVar = 'W';
bool boolVar = false;


printf("integer vaue = %d\n", x);// %i as well for interger
printf("float value = %0.02f\n", y);
printf("double value = %e\n", z); // %g as well for double
printf("char value = %c\n", charVar);
printf("char value = %i\n", boolVar);

    return 0;
}

/*Result - 
integer vaue = 100
float value = 331.75
double value = 8.440000e+011
char value = W
char value = 0
*/