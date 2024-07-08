/*code challange - Enum*/

#include<stdio.h>
 
int main ()
{
    
enum Company {GOOGLE , FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT}; //defining enum

enum Company x = XEROX;
enum Company y = GOOGLE;
enum Company z = EBAY;

printf("%d\n", x);
printf("%d\n", y);
printf("%d\n", z);

    return 0;
}

/* Result -
2
0
4 
*/