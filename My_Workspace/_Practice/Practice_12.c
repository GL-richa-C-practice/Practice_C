/* If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402*/

#include<stdio.h>

int main ()
{
 int n,d1,d2,d3,d4,d5;
 int n_d1,n_d2,n_d3,n_d4,n_d5;
 int new_num;
 

 printf("Enter 5-digit number = ");
 scanf("%d", &n);

 d1 = n%10;
 n = n/10;
 n_d1 = (d1+1)%10;
 printf("d1 = %d\n",d1);
 printf("n_d1 = %d\n",n_d1);
 d2 = n%10;
 n = n/10;
 n_d2 = (d2 +1)%10;
 printf("d2 = %d\n",d2);
 printf("n_d2 = %d\n",n_d2);
 d3 = n%10;
 n = n/10;
 n_d3 = (d3 + 1)%10;
 printf("d3 = %d\n",d3);
 printf("n_d3 = %d\n",n_d3);
 d4 = n%10;
 n = n/10;
 n_d4 = (d4 +1)%10;
 printf("d4 = %d\n",d4);
 printf("n_d4 = %d\n",n_d4);
 d5 = n%10;
 n = n/10;
 n_d5 = (d5 + 1)%10;
 printf("d5 = %d\n",d5);
 printf("n_d5 = %d\n",n_d5);
    
    new_num = (n_d5 * 10000)+(n_d4*1000)+(n_d3*100)+(n_d2*10)+n_d1;
    printf("New number = %d\n", new_num);
    return 0;
}