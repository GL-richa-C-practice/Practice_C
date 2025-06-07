#include <iostream>
using namespace std;



int main()
{  
   int total {};
   int num1 {0},num2{0},num3{0};
   const int count {3};

   cout << "Enter 3 num :";
   cin >> num1 >> num2 >> num3;

   total = num1+num2+num3;
   double avg {0.0};
   avg = static_cast<double>(total)/count;
   cout << "3 numbers were :" << num1 << ","<<num2 << ","<< num3<<endl;
   cout << "Total = " << total <<endl;
   cout << "Average = " << avg << endl;

    return 0;
}   