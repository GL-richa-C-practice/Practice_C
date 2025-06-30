#include<iostream>
// pass by value 

using namespace std;

void pram_test(int);


int main()

{  
    int actual{50};
    cout << actual << endl;
    pram_test(actual);
    cout << actual << endl;
    return 0;
}

void pram_test(int formal){
    cout << formal << endl;
    formal = 100;
    cout << formal << endl;
}

/*/Desktop/Learning/C++_Practice/"practice12
50
50
100
50 -> though the value for formal was changed to 100 in the function still the main printed 50 as pram_test was working
with the copy al along
*/