#include<iostream>
#include<string>

using namespace std;

void say_hello(string);


int main()

{  
   string my_dog {"BhoBho"}; 
   say_hello(my_dog);
   say_hello("Richa");//c-stye string
  
    return 0;
}

void say_hello(string name){
    cout << "Hello " << name << endl;
}