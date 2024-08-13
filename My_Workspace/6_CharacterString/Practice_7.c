#include <stdio.h>
#include <string.h>

int main(){
 
   char src[50], dest[50];
   strcpy(src, "This is source");
   strcpy(dest, "This is destination ");

   strncat(dest, src, 15);

   printf("Final destination string : %s\n",dest); 

   // Comparing the strings

   printf("strcmp(\"A\",\"A\") is");
   printf("%d\n", strcmp("A","A"));

   printf("strcmp(\"B\",\"B\") is");
   printf("%d\n", strcmp("B","B"));

   printf("strcmp(\"B\",\"C\") is");
   printf("%d\n", strcmp("B","C"));

   printf("strcmp(\"apples\",\"apple\") is");
   printf("%d\n", strcmp("apples","apple"));


    return 0;
}
