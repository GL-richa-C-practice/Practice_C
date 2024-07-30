//Character String


#include<stdio.h>

int length_string (const char string[])
{
   int count  = 0;

   while(string[count] != '\0')
   ++count;
   return count;
}

void concatinate_string( char result[],  char str1[],  char str2[])
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
   //char word_input[] = "";
   char word_input1[] = "";
   char word_input2[] = "";
   char result[100];

   //printf("Enter a new string:");
   //scanf("%[^\n]s", word_input);

   printf("Enter a String1:");
   scanf("%[^\n]s", word_input1);
   printf("%s\n", word_input1);

   fflush(stdin);

   printf("Enter a String2:");
   scanf("%[^\n]s", word_input2);
   printf("%s\n", word_input2);


   //printf("%s\n", word_input);
   //printf("The length of input string is =  %d\n", length_string(word_input));



   concatinate_string(result, word_input1, word_input2);

   printf("Concatination is done =  %s\n", result);

   return 0;
}




