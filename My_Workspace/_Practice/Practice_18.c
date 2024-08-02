/* Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.*/

#include<stdio.h>

int main ()
{  
    float angle_a,angle_b,angle_c,angle_sum;
    printf("Enter 1st angle of triangel = ");
    scanf("%f",&angle_a);
    printf("Enter 2nd angle of triangel = ");
    scanf("%f",&angle_b);
    printf("Enter 3rd angle of triangel = ");
    scanf("%f",&angle_c);

    angle_sum = angle_a + angle_b + angle_c;
    printf("Sum of all 3 angles of triangle = %.2f\n", angle_sum);

    if(angle_sum == 180)
    printf("Triangle is valid\n");
    else
    printf("Triangle is invalid\n");
  
    return 0;
}