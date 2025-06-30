#include<iostream>
#include<vector>
#include<string>
// Pointers
    
using namespace std;

int main()

{   
int score[]{100, 99, 87};
int *score_ptr{score};
cout << score << endl; // address
cout << score_ptr << endl; 


cout << "***********************"<< endl;
cout << score[0] << endl;
cout << score[1] << endl;
cout << score[2] << endl;
cout << "***********************"<< endl;
cout << score_ptr[0] << endl;
cout << score_ptr[1] << endl;
cout << score_ptr[2] << endl;
cout << "***********************"<< endl;
cout << score_ptr << endl;
cout << score_ptr + 1 << endl;
cout << score_ptr + 2 << endl;
cout << "***********************"<< endl;
cout << *score_ptr << endl;
cout << *(score_ptr +1) << endl;
cout << *(score_ptr +2) << endl;

cout << endl;

    return 0; }