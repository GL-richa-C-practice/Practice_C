// diaplay string in revers order
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

   int length,i,n,j; 
   char name[25][50], temp[25];
   char order[500];
   
   printf("Enter a string: ");
   scanf("%[^\n]s",order);

   printf("Input string = %s\n",order);
   length = strlen(order);
   printf("length of string = %d\n",length);

   for(int i = length; i >= 0; --i){

    printf("%c", order[i]);
   }
   printf("\n");

   printf("************BUBBLE SORT****************\n");
   
   printf("Enter number of string: ");
   scanf("%d", &n);

   for(i = 0; i <= n; i++){
    scanf("%s",name[i]);
   }
   for(i=1;i<=n;i++){
      for(j=0;j<n-i;j++){
         if(strcmp(name[j],name[j+1])>0){
             strncpy(temp,name[j], sizeof(temp)-1);
             strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
             strncpy(name[j+1],temp, sizeof(name[j] + 1) -1);
         }
    printf("The string appearafter sorting: \n");
    for(i = 0; i<=n; i++)
       printf("%s\n",name[i]);     
      }
   }

   return 0;
}
