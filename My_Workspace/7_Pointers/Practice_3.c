//pointers
#include<stdio.h>
#include <stddef.h>

int main ()
{
   long num1 = 0l;
   long num2 = 0l;
   long *pnum = NULL;
   printf("num1 = %ld , num2 = %ld\n",num1,num2);
   pnum = &num1;
   printf("address of num1 = %p\n",(void*)&pnum);
   printf("###############pnum = %p\n",*pnum);
   *pnum = 2l;
   printf("*pnum = %p \n",*pnum);
   ++num2;
   printf("num2 = %ld\n",num2);
   num2 += *pnum;
   printf("***********num2*******  = %p\n",num2);
   pnum = &num2;
   printf("address of num2 = %p \n",&num2);
   printf("###############pnum = %p\n",*pnum);
   ++*pnum;
   printf("@@@@@@@@@@@@@@*pnum = %d\n",*pnum);

   printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n",num1,num2,*pnum,*pnum + num2);

    return 0;
}