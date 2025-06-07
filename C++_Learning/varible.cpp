#include <iostream>
using namespace std;

int length{0}, width{0};//Global vaiable

int main()
{  
    //int length{0}, width{0};//Local Variable
    cout << "Enter length: "; 
    cin >> length;
    cout << "Enter width: "; 
    cin >> width;
    cout << "Area of room = " << length*width << endl;
    return 0;
}