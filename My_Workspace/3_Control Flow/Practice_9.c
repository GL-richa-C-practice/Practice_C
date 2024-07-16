// Challange - To create a guessing game

#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

int main ()
{
  time_t t;
  srand((unsigned) time(&t));
  
  jump:
  printf("****************Start a new game*************** \n");

  int randomNum = rand()%21;
  printf("Random Number: %d\n", randomNum);
  int i;
  
  for(i = 5; i>=1; i--) // To calculate no of tries
  {
   printf("Your %d tries are left\n", i);
  
    int user_input = 0;
    printf("Enter a guess:");//guess a number between 0 and 20
    scanf("%d", &user_input);
     for(int j = 1; j<=20; j++)
     {
      if(user_input > 20)
      {
       printf("Input is invalid, please choose correct input between 0 to 20\n");
       break;
      }
      if(user_input > randomNum && user_input < 20)
      {
       printf("Sorry, %d is wrong. My number is smaller than that\n", user_input);
       break;
      }
      if(user_input < randomNum)
      {
        printf("Sorry, %d is wrong. My number is larger than that\n", user_input);
        break;
      }
      if(user_input == randomNum)
      {
        printf("Congratulations, You guessed right\n");
        goto jump;
      }
      
     }
   
   
  }
      return 0;
}