//With pointer notation
#include<stdio.h>
#include <stddef.h>
#include <string.h>

void copyString(char *to, char *from)
{
  while(*from) // the null character isequal to th value 0, so will jump out then
    *to++ = *from++;

    *to = '\0';
}
int main (void)
{
   char string1[] = "My name is Richa";
   char string2[100];

   copyString(string2, string1);
   printf("%s\n",string2);
    return 0;
}