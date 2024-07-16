//Arrays
#include<stdio.h>

int main ()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("Enter the 10 grades:\n");

    for(int i = 0; i< count; i++)
    {
         printf("%d>", i+1);
         scanf("%d", &grades[i]);
         sum+= grades[i];
    }

    average = sum/count;
    printf("Average of ten grades is: %.2f\n", average);
   return 0;
}