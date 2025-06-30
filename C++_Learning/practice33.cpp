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
string get_name(){
  return name;
}

Player();
Player(string name_val);
Player(string name_val,int health_val,int xp_val);
};
//Constructructor initialization list
Player::Player()
:name{"None"},health{0},xp{0}{
}
Player::Player(string name_val)
:name{name_val},health{0},xp{0}{
}
Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
}




int main(){
    
  Player empty;
  Player frank("Frank");
  Player villan("Villan",100,55);
    return 0; 
}