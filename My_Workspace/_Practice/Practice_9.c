/* In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of 
illiterate men and women if the population of the town is
80,000.*/

#include<stdio.h>

#define POPULATION 80000

int main ()
{
    int men, women, total_literacy, men_literacy, women_literacy;
    int illiterate_men, illiterate_women;

    men = POPULATION * 0.52;
    printf("Total number of men = %d\n",men);

    women = POPULATION - men;
    printf("Total number of women = %d\n",women);

    total_literacy = POPULATION * 0.48;
    printf("Total Literacy = %d\n",total_literacy);

    men_literacy = POPULATION * 0.35;
    printf("MEN Literacy = %d\n",men_literacy);

    women_literacy = total_literacy - men_literacy;
    printf("Women Literacy = %d\n",women_literacy);

    printf("**********OUTPUT**************\n");

    illiterate_men = men - men_literacy;
    printf("Illiterate Men = %d\n",illiterate_men);

    illiterate_women = women - women_literacy;
    printf("Illiterate Women = %d\n",illiterate_women);

 
return 0;
}