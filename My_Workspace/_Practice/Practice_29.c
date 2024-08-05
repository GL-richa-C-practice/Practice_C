/* A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.*/

// Assuption - fine is calculated on per day basis
#include<stdio.h>

int main ()
{  
    int day;
    printf("Enter number of days for which fine is calculated = ");
    scanf("%d", &day);
    float fine;


    if(day > 30){
    printf("*******Membership is canceled*********\n");
    }
    
    if(day > 0 && day <= 5){
    fine = day * 0.5;
    printf("Fine for %d days = %.2f rupees\n", day,fine);
    
    }
    if(day >=6 && day <= 10){
    fine = ((5 * 0.5) + ((day-5) * 1));
    printf("Fine for %d days = %.2f rupees\n", day,fine);

    }

    if(day >= 11 && day <= 30){
    fine = ((5 * 0.5) + (5 * 1) + ((day-10) *5)); 

    printf("Fine for %d days = %.2f rupees\n", day,fine);
    }
    
    
    
    
    

return 0;
}