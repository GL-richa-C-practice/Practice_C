/*Write a program to produce the following output:
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
*/

#include<stdio.h>

int main ()
{  

  int row = 5;

for(int i = 1;i<= row; i++){

  for(int j = 0; j <= row-i; j++){
    printf(" ");
  }

  int C = 1;

  for(int l = 1; l<= i;l++){
    printf("%d ",C);
    C = C* (i -l)/l;
  }
  printf("\n");
}

return 0;
}