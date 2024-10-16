
#include<stdio.h>

void geeks()
{
  int var = 10;

  int *ptr;

  ptr = &var;

  printf("Value of pointer = %p\n", ptr);
  printf("Value of var = %d\n", var);
  printf("Value of *ptr = %d\n", *ptr);
}

int main()
{
  geeks();
  return 0;
}