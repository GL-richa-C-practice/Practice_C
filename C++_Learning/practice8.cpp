#include<iostream>
#include<string>

using namespace std;
int main()
{   
 string user_input;
 cout << "Enter something :";
 cin >> user_input;

 size_t total_row = user_input.size();

  for(size_t row {1};row<=total_row;++row){
    for (int blank (total_row-row); blank >=1; --blank)
    cout << " ";

    if(total_row <= 1){
        cout << user_input;
    }
    else{
        for (size_t i{0},j{row-1};i<((row * 2) - 1); ++i)
        if(i >= row){
            j--;
            cout << user_input.at(j);
        }else{
            cout << user_input.at(i);
        }
        cout << endl;
    }
  }


    return 0;
}