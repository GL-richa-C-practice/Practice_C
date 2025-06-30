#include<iostream>
#include<vector>
#include<string>
// Pointers
    
using namespace std;

int main()

{  
int num {10};
cout << num << endl;
cout << sizeof(num) << endl;
cout << &num << endl;

cout << "********************" << endl;
int *p;
cout << p << endl;
cout << &p << endl;
cout << sizeof(p) << endl;
p = nullptr;
cout << p << endl;
cout << "********************" << endl;
int *p1 {nullptr};
double *p2 {nullptr};
int temp{};
unsigned long long *p3 {nullptr};
vector<string> *p4 {nullptr};
string *p5{nullptr};

cout << sizeof(p1) << endl;
cout << sizeof(p2) << endl;
cout << sizeof(p3) << endl;
cout << sizeof(p4) << endl;
cout << sizeof(p5) << endl;
cout << sizeof(temp) << endl;
cout << "********************" << endl;

double high_temp{108.3};
double low_temp{55.2};

double *temp_ptr{&high_temp};

cout << *temp_ptr << endl;

//temp_ptr = &low_temp;
*temp_ptr = low_temp;

cout << *temp_ptr << endl;
cout << "********************" << endl;

string name {"Richa"};
string *name_ptr{&name};

cout << *name_ptr << endl;

name =  "Mayank";

cout << *name_ptr << endl;
cout << "********************" << endl;

vector<string> stooges {"Larry", "Moe", "Curlly"};
vector<string> *vec_ptr {nullptr};

vec_ptr = &stooges;

cout << (*vec_ptr).at(0) << endl;

cout << "Stooges:";
for(auto test: *vec_ptr)
cout << test << " ";
  cout << endl;


return 0;
}
