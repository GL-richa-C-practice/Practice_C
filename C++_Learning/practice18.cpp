#include<iostream>

// Recursion
using namespace std;


int sum_of_digits(int n){
   if (n == 0)
   return 0;
   return (n % 10 + sum_of_digits(n / 10));
    
}

int main()

{  
sum_of_digits(656);

return 0;
}
