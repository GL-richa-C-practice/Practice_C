/*Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A*/

#include<stdio.h>
#include<math.h>

int main ()
{  


for(int i = 0; i<= 6; i++){
     for(int c = 65; c<= 71 - i; c++) //loop for first half
     {
        printf("%c ",c);
      
     }
     // to add space
     for(int sp = 0; sp<i*2-1;sp++)
     
     printf("  ");
     

     for(int p = 71 - i;p>=65;p--) // loop for second half
     {  if(p == 71);
     else
          printf("%c ",p);
     }
       printf("\n");
}


return 0;
}