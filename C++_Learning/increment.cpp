#include <iostream>
using namespace std;

int main()
{  
    int counter {10};
    int result {0};

    //incement operator as prefix
    //cout << "Counter = " << counter << endl;
    //result = ++ counter;
    //cout << "Result = " << result << endl;
    // increment operator as postfix
    cout << "Counter = " << counter << endl;
    result = counter++;
    cout << "Result = " << result << endl;
    cout << "Counter = " << counter << endl;
    return 0;
}   