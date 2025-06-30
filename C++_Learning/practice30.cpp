#include<iostream>
#include<string>
#include<vector>

using namespace std;

// classes and object

class Player{
//atributes
public:
string name;
int health;
int xp;
//method
void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
bool is_dead();
};


class Account{
  public:
  string name;
  double balance;

  bool deposit(double);
  bool withdraw(double);
};


int main(){
Player frank;
frank.name = "Frank";
frank.health = 100;
frank.xp = 12;    

frank.talk("Hi there");

Player *enemy = new Player;
(*enemy).name = "Richa";
(*enemy).health = 100;
enemy ->xp = 15;

enemy->talk("I will destroy you");


delete enemy;
    return 0; 
}