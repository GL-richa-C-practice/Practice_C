#include<iostream>
#include<string>
#include<vector>

using namespace std;

// classes and object

class Player{
//atributes
private:
string name;
int health;
int xp;
public:
void set_name(string name_val){
  name = name_val;
}
//overloaded constructor
Player(){
  cout << "No arg constructor" << endl;
}
Player(string name){
  cout << "string arg constructor" << endl;
}
Player(string name,int health,int xp){
  cout<< "3 arg called" << endl;
}

~Player(){
  cout << "destructor called " << name << endl;
}
};



int main(){
{
  Player slayer;
  slayer.set_name("Richa");
}

{
  Player frank;
  frank.set_name("Frank");
  Player hero("Hero");
  hero.set_name("Hritik");
  Player trainer("Niran",100,12);
  trainer.set_name("Niran");
} 

    return 0; 
}