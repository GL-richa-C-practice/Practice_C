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

 string get_name(){return name;}
 int get_health(){return health;}
 int get_xp(){return xp;}

Player(string name_val = "None",int health_val = 0,int xp_val = 0);// default parameters
//copy constructor decleration
Player(const Player &source);
//destructor
~Player(){cout << "Destruct called " << name << endl;}
};
//Delegating constructor to 1 all values constructor

Player::Player(string name_val,int health_val,int xp_val)
 :name{name_val},health{health_val},xp{xp_val}{
  cout << "all 3 arg constructor " + name << endl;
}
//copy constructor implementation
Player::Player(const Player &source)
  :name(source.name),health(source.health),xp(source.xp){
    cout << "Copy constructor - made copy of: " << source.name << endl;
    cout << "Copy constructor - made copy of: " << source.health << endl;
    cout << "Copy constructor - made copy of: " << source.xp << endl;
}
void display_player(Player p){
  cout << "Name: "<< p.get_name() << endl;
  cout << "Health: "<< p.get_health() << endl;
  cout << "xp: "<< p.get_xp() << endl;
}


int main(){
    
  // Player empty{"XXXXXXXXXXXXX",100,5};
  //Player my_new_object{empty};
  
  Player empty;

  display_player(empty);

  Player frank("Frank");
  display_player(frank);

  Player villan("Villan",100,55);
  display_player(villan);

  Player Hero("Hero",100);
    return 0; 
}