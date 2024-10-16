//With pointer notation
#include<stdio.h>
#include <stddef.h>
#include <string.h>

int main (void)
{
   char multiple[] = "A string";
   char *p = multiple;

   for(int i  = 0; i < strlen(multiple); i++){
   printf("multiple[%d]=%c, *(p+%d) = %c, &mutiple[%d] = %p, p+%d = %p\n",i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
}
    return 0;
}