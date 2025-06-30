#include <iostream>
#include<vector>

using namespace std;

int main()
{   
    
  vector <int> items{};
  char choice{};


  do {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add numbers" << endl;
    cout << "M - Display Mean of numbers" << endl;
    cout << "S - Display samllest number" << endl;
    cout << "L - Display largest numbers" << endl;
    cout << "Q - Quit" << endl;

    cout << "\nEnter choice :";
    cin >> choice;
  
    if(choice == 'p'|| choice == 'P'){
       if (items.size()== 0) 
         cout << "[] - list is empty" << endl;
       else{
        cout << "[ ";
        for (auto num : items)
        cout << num << " ";
        cout << "]"<< endl;
       }  
    } else if(choice == 'a'|| choice == 'A'){
        int num_to_add{};
        cout << "Enter integer to the list: ";
        cin >> num_to_add;
        items.push_back(num_to_add);
        cout << num_to_add << " Added" << endl; 

    } else if(choice == 'm'|| choice == 'M'){
        if(items.size() == 0)
           cout << "No data"<< endl;
        else{
            int total{};
            for (auto num: items)
            total += num;
          
            cout << "Mean = " << static_cast<double>(total)/items.size() << endl;
        }
    } else if (choice == 's'|| choice == 'S'){
        if(items.size() == 0)
           cout << "No data"<< endl;
        else{
           int smallest = items.at(0);
           for (auto num:items)
              if(num < smallest)
                 smallest = num;
                 cout << "Smallest no is : " << smallest << endl;

        }   
    } else if (choice == 'l'|| choice == 'L'){
        if(items.size() == 0)
           cout << "No data"<< endl;
        else{
            int largest = items.at(0);
            for (auto num:items)
              if(num > largest)
                 largest = num;
                 cout << "Smallest no is : " << largest << endl;
        }   
    } else if(choice == 'q'|| choice == 'Q'){
        cout << "GoodBye" << endl;
    }else{
        cout << "Invalid_selection -> please try again" << endl;
    }



  }while(choice !='Q' && choice != 'q');
  

 cout << endl;   
 return 0;
}