/* If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle.*/

#include<stdio.h>

int main ()
{  
    float side1,side2,side3;
    float angle1,angle2,angle3;

    printf("Enter sides of a triangle :");
    scanf("%f,%f,%f", &side1, &side2, &side3);

    printf("Enter angle of a triangle :");
    scanf("%f,%f,%f", &angle1, &angle2, &angle3);

    if((side1 == side2 && side2 == side3)&&(angle1 == angle2 && angle2 == angle3))
    printf("The given triangle is equilateral triangle \n");

    else if ((side1 == side2 || side2 == side3 || side3 == side1)&&(angle1 == angle2 || angle2 == angle3 || angle3 == angle1))
    printf("The given triangle is Isosceles triangle \n");

    else if ((side1 != side2 && side2 != side3 && side3 != side1)&&(angle1 != angle2 && angle2 != angle3 && angle3 != angle1))
    printf("The given triangle is Scalene triangle \n");
return 0;
}