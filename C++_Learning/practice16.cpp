#include<iostream>
#include<string>
#include<vector>
// pass by referance
using namespace std;


void test1(int &num);
void test2(string &s);
void test3(vector<string> &v);
void test4(const vector<string>&v);


void test1(int &num){
    num = 1000;
}

void test2(string &s){
    s = "changed";
}

void test3(vector<string> &v){
    v.clear();
   
}
void test4(const vector<string>&v){
    for(auto s:v)
    cout << s << " ";
    cout << endl;
}

int main()

{  
 int num{10};
 int another_num{50};
 cout << "output before pass by ref : " << num << endl;
 test1(num);
 cout << "output after pass by ref : " << num << endl;
  
 cout << "output before pass by ref : " << another_num << endl;
 test1(another_num);
 cout << "output after pass by ref : " << another_num << endl;
  
 string t {"Richa"};

 cout << "output before pass by ref : " << t << endl;
 test2(t);
 cout << "output after pass by ref : " << t << endl;

 vector<string> temp {"Singh","Mayank"};
cout << "\noutput before pass by ref : " ;
 test4(temp);

 test3(temp);
 cout << "\noutput after pass by ref : " ;
 test4(temp);

 cout << endl;
return 0;
}
