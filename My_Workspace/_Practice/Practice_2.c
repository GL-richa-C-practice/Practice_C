/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.*/

#include<stdio.h>

#define METER 1000
#define CENTIMETER 100000
#define FEET 3280.84
#define INCHES 39370.1


int main ()
{
     float Distance;
     float Convert_Meter;
     float Convert_CM;
     float Convert_Feet;
     float Convert_Inches;

     printf("Distance between 2 cities in KM = ");
     scanf("%f",&Distance);

     Convert_Meter = Distance * METER;

     printf("Distance converted in meters  = %.2f\n", Convert_Meter);

     Convert_CM = Distance * CENTIMETER;

     printf("Distance converted in CM  = %.2f\n", Convert_CM);

     Convert_Feet = Distance * FEET;

     printf("Distance converted in feet  = %.2f\n", Convert_Feet);

     Convert_Inches = Distance * INCHES;

     printf("Distance converted in inches  = %.2f\n", Convert_Inches);

    return 0;
}