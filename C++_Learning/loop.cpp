#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{   
 
   vector<int> vec{1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
   cout << vec.size()<< endl;
   int count{};
   for(auto check: vec)
   if(check % 3 == 0 || check % 5 == 0)
   count++;
   cout << count << endl;
   
    cout << endl;
    return 0;
}