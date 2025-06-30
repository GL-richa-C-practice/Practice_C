#include<iostream>
#include<string>
#include<vector>
// function overloading
//retun type is not considered
//overloading the function means using same name for various form of same function
using namespace std;

void print(int);
void print(double);
void print(string);
void print (string,string);
void print(vector<string>);

void print(int num){
    cout << "Printing int: " << num << endl;
}
void print(double num){
    cout << "Printing double: " << num << endl;
}
void print(string name){
    cout << "Printing string: " << name << endl;
}
void print(string first_name, string last_name){
    cout << "Printing string: " << first_name << " "<< last_name << endl;
}

void print(vector<string> names){
    cout << "Printing Vector of strings:";
    for(auto s: names)
      cout << s + " ";
      cout << endl;
}

int main()

{  
  print(100);
  print('A');
  print(123.5);
  print(123.3F);
  print("C-style string");
  string s {"Richa"};
  print(s);
  print(s,"Singh");
  vector <string> test{"one","two","three"};
  print(test);
  
return 0;
}
