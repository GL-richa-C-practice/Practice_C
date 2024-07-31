/* If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/

#include<stdio.h>

int main ()
{
    float English,Maths,Science,Social_Science,GK;
    float Total_Marks;
    float Percentage;
    printf("Enter marks in English = ");
    scanf("%f", &English);

    printf("Enter marks in Maths = ");
    scanf("%f", &Maths);

    printf("Enter marks in Science = ");
    scanf("%f", &Science);
    
    printf("Enter marks in Social Science = ");
    scanf("%f", &Social_Science);

    printf("Enter marks in GK = ");
    scanf("%f", &GK);

    Total_Marks = English + Maths + Science + Social_Science + GK;

    printf ("Total Marks = %.2f\n", Total_Marks);

    Percentage = (Total_Marks/500) * 100;

    printf("Percentage = %.2f%%\n", Percentage);

    return 0;
}