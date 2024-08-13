/*Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
− After the person picks, the computer does its
picking.
− Whoever is forced to pick up the last matchstick
loses the game. */

#include<stdio.h>

int main ()
{  
    int player_choice,computer_choice;
    int match_stick = 21;

    for(int i = 1; i<=match_stick; i++){
       
       
       printf("Pick the stick (1 to 4): ");
       scanf("%d",&player_choice);
       if(player_choice > 4){
       printf("Invalid choice try again choosing between 1 to 4\n");}
       else{
       computer_choice = 5 - player_choice;
       printf("computer_choice = %d\n", computer_choice);
       match_stick = match_stick - 5;
       printf("No of matchstick left = %d\n", match_stick);   
       }
       if(match_stick == 1)
       printf("You loose,start the game again \n");


    }


return 0;
}