// Switch statement

#include<stdio.h>
#include<stdbool.h>

int main ()
{
   float val1 , val2;
   char operator;

   printf("Type in your expression : ");
   scanf("%f %c %f" , &val1, &operator, &val2);
   
   switch(operator){
      case '+':
      printf("%.2f\n", val1 + val2);
      break;

      case '-':
      printf("%.2f\n", val1 - val2);
      break;

      case '*':
      printf("%.2f\n", val1 * val2);
      break;

      case '/':
      if (val2 == 0)
      printf("Devision by zero\n");
      else
      printf("%.2f\n", val1 / val2);
      break;
      default:
      printf("Unknown operator");
      break;
   }
   return 0;
}