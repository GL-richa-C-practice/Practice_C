#include<iostream>
#include<string>
#include<vector>

using namespace std;

// classes and object

class Player{
//atributes
string name;
int health;
int xp;
//method
void talk(string);
bool is_dead();
};


class Account{
  string name;
  double balance;

  bool deposit(double);
  bool withdraw(double);
};


int main(){

    Player Richa;
    Player Mayank;

    vector<Player>player_vec{Richa};
    player_vec.push_back(Mayank);

    Player *test{nullptr};
    test = new Player;

    delete test;

    return 0; 
}