#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<time.h>

#define COMPUTER 1
#define HUMAN 2
#define SIDE 3
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

struct Move
{
    int row , col;
};
char player = 'x', opponent = 'o';

//Function to return the remaining moves on the board
bool isMovesLeft (char board[3][3])
{
 for(int i = 1; i <= 3; i++)
    for(int j = 1; j <= 3; j++)
      if (board[i][j] == '_')
        return true;       
 return false; 
}

//Function to evaluate 
int evaluation(char b[3][3])
{
    // checking for row for x or o  victory
    for(int row = 0; row <= 3; row++){
    if(b[row][0] == b[row][1] && b[row][1] == b[row][2])
    {
        if(b[row][0] == player)
        return +10;
        else if (b[row][0] == opponent)
        return -10;
    }
    }
    // checking for coloumn for x or o victory
    for(int col = 0; col <= 3; col++){
    if(b[0][col] == b[1][col] && b[1][col] == b[2][col])
    {
        if(b[0][col] == player)
        return +10;
        else if (b[0][col] == opponent)
        return -10;
    }
    }
    // checking for diagnol for x or o victory
    if(b[0][0] == b[1][1] && b[1][1] == b[2][2])
    {
        if(b[0][0] == player)
        return +10;
        else if (b[0][0] == opponent)
        return -10;
    }

    if(b[0][2] == b[1][1] && b[1][1] == b[2][0])
    {
        if(b[0][2] == player)
        return +10;
        else if (b[0][2] == opponent)
        return -10;
    }
    // if none of them has won

    return 0;
}

int main()
{
    
}
