#include<iostream>
// default arguments

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06,double shipping = 3.50);// default agrument should go till the tail end

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main()

{  
   double cost{0};
   cost = calc_cost(200.0);// default arg will be used
   cout << cost << endl; // 215.5
   cost = calc_cost(120.6,0.08);
   cout << cost << endl;//133.748
   cost = calc_cost(100.0,0.09,5.26);
   cout << cost << endl;//144.26

return 0;
}

