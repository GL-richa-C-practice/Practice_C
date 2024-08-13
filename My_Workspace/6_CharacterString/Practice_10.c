//case conversion
#include <stdio.h>
#include <string.h>

int main(){
   char text[100];
   char substring[40];

   printf("Enter string to be searched not more than %d char : \n ", 100);
   scanf("%s", text);

   printf("Enter string to be sought not more than %d char : \n",40);
   scanf("%s", substring);

   printf("\n Print the string entered: %s \n",text);
   printf("Second string entered: %s \n",substring);

   //convert both

   for(int i = 0; (text[i] = (char)toupper(text[i]))!= '\0'; ++i);
   for(int i = 0; (substring[i] = (char)toupper(substring[i]))!= '\0'; ++i);

   printf("the second string %s found in the first.\n",((strstr(text,substring) == NULL)? "was not": "was"));



 
    


    return 0;
}
