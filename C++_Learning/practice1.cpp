#include <iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> vec{55, 66, 88, 25, -23, 89, -99, 66};
    int count{};
    unsigned int index{};
   
    while(index < vec.size() && vec.at(index)!= -99){
   
        ++index;
        ++count;
     
    }
    cout << count <<endl;

    return 0;
}