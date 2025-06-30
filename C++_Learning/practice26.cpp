#include<iostream>
#include<vector>
#include<string>

// Return Pointer from a function
using namespace std;
  void reverse_array(int *arr, int size){
    for(int i = size - 1; i >= 0; --i)
    cout << arr[i] << " ";
    cout << endl;
}

/*   void reverse_array(int* arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }
}*/



int main(){

int size_of_arr;

cout << "Size of array:";
cin >> size_of_arr;

int *arr = new int [size_of_arr];// for dynamic array allocation

for(int i = 0; i < size_of_arr; i++){
cout << "Enter the elements: ";
cin >> arr[i];
}

cout << "You Entered: ";
for (int i = 0; i < size_of_arr; ++i) {
    cout << arr[i] << " ";
}
cout << endl;
reverse_array(arr, size_of_arr);

delete[] arr;

cout << endl;
    return 0; 
}