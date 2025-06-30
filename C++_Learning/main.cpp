#include<iostream>
#include"Account.h"


using namespace std;

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
