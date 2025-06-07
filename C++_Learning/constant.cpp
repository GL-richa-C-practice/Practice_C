#include<iostream>
using namespace std;
int main()
{
  
  const double Charge_per_Small_Room{25.0};
  const double Charge_per_Large_Room{35.0};
  
  const double Sales_Tax_Rate{0.06};
  const int estimate_expiry{30};
  int num_of_small_rooms{0};
  int num_of_large_rooms{0};

  cout << "Welcome to Frank's cleaning Services \n";
  cout << "Enter number of small rooms to be cleaned = ";
  cin >> num_of_small_rooms;
  cout << "Enter number of large rooms to be cleaned = ";
  cin >> num_of_large_rooms;
  double Cost = (num_of_small_rooms*Charge_per_Small_Room)+(num_of_large_rooms*Charge_per_Large_Room);
  double Tax = Sales_Tax_Rate*Cost;
  double Total_Estimate = Cost + Tax;
  cout << "Price for small room is 25$\n" << "Price for large room is 35$\n"<<"Cost:"<< Cost << "$"<<"\nTax:" << Tax <<"$"<< "\nTotal_Estimte:"<<Total_Estimate<<"$"<< endl;
  cout << "This estimate is for "<< estimate_expiry<< " days\n";

  


  return 0;
}
