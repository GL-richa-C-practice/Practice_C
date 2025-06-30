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

//Player();
//Player(string name_val);
Player(string name_val = "None",int health_val = 0,int xp_val = 0);// default parameters
};
//Delegating constructor to 1 all values constructor

/*Player::Player()
:Player{"None",0,0}{
  cout << "No arguments "<< endl;
}
Player::Player(string name_val)
:Player{name_val,0,0}{
  cout << "one arg constructor" << endl;
}*/
Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
  cout << "all 3 arg constructor" << endl;
}


int main(){
    
  Player empty;
  Player frank("Frank");
  Player villan("Villan",100,55);
  Player Hero("Hero",100);
    return 0; 
}