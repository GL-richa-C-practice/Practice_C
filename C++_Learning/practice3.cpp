#include <iostream>
#include<vector>

using namespace std;

int main()
{   
    
    vector<char> vowels {'a','e','i','o','u'};
    char selection{};
    cout << "Enter the charectors :";
    cin >> selection;
    do{
     if (selection == vowels.at(0))
     cout << "Vowel found: "<< selection << endl;
    else if (selection == vowels.at(1))
     cout << "Vowel found: "<< selection << endl;
    else if (selection == vowels.at(2))
     cout << "Vowel found: "<< selection << endl; 
    else if (selection == vowels.at(3))
     cout << "Vowel found: "<< selection << endl; 
    else if (selection == vowels.at(4))
     cout << "Vowel found: "<< selection << endl;  
    else
     cout << "No vowel found" << endl; 
    break;
    }while (selection != vowels.at(0)&&selection != vowels.at(1)&&selection != vowels.at(2)&&selection != vowels.at(3)&&selection != vowels.at(4));

    

    return 0;
}