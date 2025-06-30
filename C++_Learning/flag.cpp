#include <iostream>
using namespace std;

int main()
{   
    bool flag {false};
    int num{};

    while(!flag){
        cout << "Enter number in the given range :";
        cin >> num;
        if (num <=1 || num >=5)
        cout << "Out of range"<< endl;
        else{
            cout << "Thanks!" << endl;
            flag = true;
        }
    }
    
    return 0;
}