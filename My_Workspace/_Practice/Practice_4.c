/* Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.*/

#include<stdio.h>

int main ()
{
    float Farenhite;
    float Celsius;
    printf("Temperature in Farenhite = ");
    scanf("%f", &Farenhite);

    Celsius = ((Farenhite - 32)*((float)5/(float)9));

    printf("Temperature in Celsius = %.2f Degree\n", Celsius);

    return 0;
}