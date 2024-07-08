/*Check the usage of scanf*/

#include<stdio.h>

int main ()
{
    char str[100];
    int i;

    printf("Enter a value:");
    scanf ("%s %d", str, &i); // read data as a string and integer and store in str and i variables
    //scanf function uses pointers to variable so we need to use & for any variale except string

    printf("\n You entered: %s %d", str,i);
    return 0;
}

/*Result - 
 Enter a value:Richa 35

 You entered: Richa 35
 */