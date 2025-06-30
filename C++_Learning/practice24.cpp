#include<iostream>
#include<vector>
#include<string>
// Pointers
    
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a + *b;
    *a = temp - *a;
    *b = temp - *b;
}

int main()

{   
  int x = {5};
  int y = {10};

  swap(&x,&y);

  cout << x << endl;
  cout << y << endl;


  /*int a {};
  int b {};

  int *p1{&a};
  int *p2{&b};

  cout << "Enter the value :";
  cin >> a;

  cout << "Enter the value :";
  cin >> b;

  cout << *p1 << endl;
  cout << *p2 << endl;
  cout << "**********************************" << endl;
  *p1 = *p1 + *p2;
  *p2 = *p1 - *p2; 
  *p1 -= *p2;
   cout << *p1 << endl;
   cout << *p2 << endl;*/
    return 0; }