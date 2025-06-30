#include<iostream>
#include<string>

using namespace std;
int main()
{   
    string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    
    string secret_message;
    string encryted_message;
    string decrypt_message;
    int count{};

    cout << "Enter the secret message: ";
    getline(cin, secret_message);

    for(size_t c:secret_message){
        size_t position = alphabet.find(c);
        if(position != string::npos){
        char new_char{key.at(position)};
        encryted_message += new_char;
    } else {
        encryted_message += c;
    }
}   

cout << "Encrypted message : " << encryted_message << endl;

for(size_t c: encryted_message){
    size_t position = key.find(c);
    if (position != string::npos){
        char new_char{alphabet.at(position)};
        decrypt_message += new_char;
    }else{
        decrypt_message += c;
    }
}
cout << "Decrypted message : " << decrypt_message << endl;    
    cout << endl;
    return 0;
}