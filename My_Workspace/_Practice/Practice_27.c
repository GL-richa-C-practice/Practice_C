/* An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured.*/

#include<stdio.h>
#define City 0
#define Village 1
#define Male 2
#define Female 3
#define Excellent 4
#define Poor 5
int main ()
{  

    int age;
    printf("Enter age of person:");
    scanf("%d", &age);

    int PERSON_Health;
    printf("Enter health of a person: ");
    scanf("%d",&PERSON_Health);
    
    int living;
    printf("Enter Living of a person: ");
    scanf("%d",&living);

    int gender;
    printf("Enter gender of a person: ");
    scanf("%d",&gender);

    if(age >= 25 && age <= 35)
    {
        if(PERSON_Health == Excellent && gender == Male && living == City)
        printf("The premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs\n");

        else if(PERSON_Health == Excellent && gender == Female && living == City)
        printf("The premium is Rs. 3 per thousand and his policy amount cannot exceed Rs. 1 lakhs\n");

        else if(PERSON_Health == Poor && gender == Male && living == Village)
        printf("The premium is Rs. 6 per thousand and his policy amount cannot exceed Rs. 10000\n");

    }
    else
    printf("The person is not insure\n");
return 0;
}