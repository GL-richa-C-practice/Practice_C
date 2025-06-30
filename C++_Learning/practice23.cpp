#include<iostream>
#include<vector>
#include<string>
// Pointers
    
using namespace std;

int main()

{   
int score[]{100, 99, 87,55, -1};
int *score_ptr{score};
while(*score_ptr != -1){ // -1 is a sentinel A sentinel value is a special data value used to signify the end of a data structure 
                           //or to indicate a specific condition, such as the end of a loop or an error state
    cout << *score_ptr++ << endl;// first derefrencing the pointer and then incrementing the pointer
    //score_ptr++;
}

string s1 {"Frank"};
string s2{"Frank"};
string s3{"Richa"};

string *p1 (&s1);
string *p2 (&s2);
string *p3 (&s1);

cout << boolalpha;

cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;

cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

p3 = &s3;

cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;


cout << "\n*********************************************" << endl;

char name[]{"Frank"};

char *char_ptr1{nullptr};
char *char_ptr2{nullptr};

char_ptr1 = &name[0];
char_ptr2 = &name[3];



cout << "In the string "<< name << ", " << *char_ptr2 << " is "<< (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

cout << endl;

    return 0; }