#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MONTH 12
#define YEAR 5
int main()
{
    
    float weather[YEAR][MONTH] ={
        {12.6,25.5,66.5,32.5,99.3,45.6,65.5,66.2,33.2,55.6,12.6,13.5},
        {12.6,25.5,66.5,14.5,99.3,45.6,65.5,33.2,33.2,55.6,12.6,13.5},
        {12.6,25.5,15.5,32.5,12.3,45.6,65.5,66.2,33.2,55.6,12.6,13.5},
        {12.6,25.5,17.5,28.5,99.3,45.6,13.5,18.2,33.2,55.6,12.6,13.5},
        {12.6,25.5,66.5,16.5,99.3,45.6,65.5,66.2,21.2,55.6,12.6,13.5},
    };
    int year,month;
    float subtot, total;
    

    printf("YEAR\t\tRAINFALL (inches)\n");
    for(year = 0, total = 0; year<YEAR;++year)
        {
          
          for(month =0, subtot = 0;month<MONTH;++month)
          {
             subtot += weather[year][month];
          }
          printf("%d\t\t%.2f\n",2010+year,subtot);
        }
    printf("\nThe yearly average is %.2f inches.\n\n",subtot/YEAR);
   
    return 0;
}
