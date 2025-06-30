#include <iostream>
using namespace std;

int main()
{   
    int length {};
    int width {};
    int height {};
    const float base_cost{2.50};
    cout << "Enter dimentions of the package : ";
    cin >> length >> width >> height;

    if (length > 10 || width > 10 || height >10){
    cout << "Dimentions out of range cannot be shipped"<< endl;
    }
    else{
        int volume {};
        volume = length*width*height;
        cout << "Volume = " << volume << endl;
        if (volume <= 100)
        cout << "Cost for packging = " << base_cost <<endl;
        
        else if(volume > 500)
        cout << "Cost for packging = " << base_cost+(0.25*base_cost)<<endl;

        else if(volume > 100)
        cout << "Cost for packging = " << base_cost+(0.1*base_cost)<<endl;
    }

    return 0;
}