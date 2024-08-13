//Other string function example
#include <stdio.h>
#include <string.h>

int main(){
   char buf[100];
   int nLetters = 0;
   int nDigits = 0;
   int nPunct = 0;

   printf("Enter an intersting string less than %d characters: \n",100);
   scanf("%s", buf);

   int i = 0;
   while(buf[i])
   {
      if(isalpha(buf[i]))
      ++nLetters;
      else if(isdigit(buf[i]))
      ++nDigits;
      else if(ispunct(buf[i]))
      ++nPunct;
     ++i; 
   }

   printf("Input string contains %d letters, %d digits and %d punchuations\n", nLetters,nDigits,nPunct);
 
    


    return 0;
}
