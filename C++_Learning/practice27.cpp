#include<iostream>
#include<string>

//String reverse
using namespace std;

void reverse_string(char *str){
    char *start = str;
    char *end = str;

    while(*end != '\0'){
        ++end;
    }
    --end;

    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}


int main(){

  const int MAX_LEN{1000};
  char str[MAX_LEN];

  cout << "Enter a string : ";
  cin.getline(str , MAX_LEN);

  cout << str << endl;

 reverse_string(str);

 cout << "Reverse string : " << str << endl;

    return 0; 
}