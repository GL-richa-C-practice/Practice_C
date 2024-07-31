/* The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

#include<stdio.h>

#define pi 3.14159

int main ()
{
    float length,breadth,radius;
    float rec_area, rec_parameter, circle_area,circle_circumference;

    printf("Enter length of rectangle = ");
    scanf("%f", &length);
    
    printf("Enter breath of rectangle = ");
    scanf("%f", &breadth);

    printf("Enter radius of circle = ");
    scanf("%f", &radius);

    rec_area = length * breadth;

    printf("Area of rectangle = %.2f\n",rec_area);

    rec_parameter = 2 * (length + breadth);
    
    printf("Perimeter of rectangle = %.2f\n",rec_parameter);

    circle_area = radius * radius;

    printf("Area of circle = %.2f\n",circle_area);

    circle_circumference = 2 * pi * radius;
    
    printf("Circumferance of circle = %.5f\n",circle_circumference);

    return 0;
}