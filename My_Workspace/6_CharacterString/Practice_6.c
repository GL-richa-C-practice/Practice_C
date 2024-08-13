#include <stdio.h>
#include <string.h>

int main(){
 char myString[] = "Richa Singh";
 char say[] = "My life is beautiful in Poland and I have a daughter here";
 char temp[100];

 strncpy(temp, say,sizeof(temp) - 1);

 printf("Length of string is: %d\n", strlen(myString));
 printf("Length of string is 2: %d\n", strlen(say));

 printf("Copy = %s\n", temp);

    return 0;
}
