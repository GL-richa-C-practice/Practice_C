#include<iostream>
#include<string>
#include<vector>

using namespace std;

// implementing member methods

class Account{
  private:
    string name;
    double balance;
  public:
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}


    void set_name(string n);
    string get_name();


    bool deposit(double amount);
    bool withdral(double amount);
};

void Account::set_name(string n){
  name = n;
}

string Account::get_name(){
  return name;
}

bool Account::deposit(double amount){
  balance += amount;
  return true;
}

bool Account::withdral(double amount){
  if(balance - amount >= 0){
    balance -= amount;
    return true;
  } else {
    return false;
  }
}


int main(){

  Account frank_act;
  frank_act.set_name("Frank account");
  frank_act.set_balance(1000.0);

  if(frank_act.deposit(200.0))
  cout << "Deposit OK" << endl;
  else
  cout << "Deposit not allowed" << endl;

  if(frank_act.withdral(500.0))
  cout << "Withdrawl OK" << endl;
  else
  cout << "Withdral not allowed" << endl;

  if(frank_act.withdral(1500.0))
  cout << "Withdrawl OK" << endl;
  else
  cout << "Not sufficient fund" << endl;


  return 0;
}