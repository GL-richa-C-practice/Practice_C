//Character String
#include<stdio.h>


void concatinate_string(char result[], char str1[],  char str2[])
{
  int i, j;
  

  for (i = 0; str1[i] != '\0'; ++i)
  {
     result[i] = str1[i];
  }

   for(j = 0; str2[j] != '\0';++j)
   result[i + j] = str2[j];

   result[i + j] = '\0';

 

}

int main ()
{
  
   char word_input1[] = "Richa";
   char word_input2[] = "Mayank";
   char result[100];

   concatinate_string(result, word_input1, word_input2);
   printf("Concatination is done =  %s\n",result);

   return 0;
}




