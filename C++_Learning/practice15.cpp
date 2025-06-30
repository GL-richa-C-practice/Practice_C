#include<iostream>
#include<string>
#include<vector>
// function overloading
//retun type is not considered
//overloading the function means using same name for various form of same function
using namespace std;

void print_array(int,size_t);
void zero_array(int,size_t);


void print_array(const int numbers[], size_t size){
    for(size_t i = 0;i < size; ++i)
    cout << numbers[i] << endl;
    
}

void zero_array(const int numbers[],size_t size){
     for(size_t i = 0;i < size; ++i);
    //cout << (numbers[i] = 0) << endl; // Error because of const keyword
}

int main()

{  
  int num [] = {1,2,3,4,5};
  zero_array(num,5);
  cout << "-------*******---------"<< endl;
  print_array(num,5);
  
  
  
return 0;
}
