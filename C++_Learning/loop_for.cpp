#include <iostream>
using namespace std;

int main()
{   
    int sum{};
    for(int i {1}; i < 16;i++)
    {
        if (i % 2 != 0)
        cout << i << endl;
        sum += i;
    }
 
        cout << sum << endl;
    
    return 0;
}