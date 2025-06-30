#include<iostream>
#include<vector>
#include<string>

// Return Pointer from a function
using namespace std;

int *creat_array(size_t size, int initial_val = 0){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; i++)
    *(new_storage + i) = initial_val;
    return new_storage;
}


void display(const int *const array, size_t size){
    for(size_t i{0}; i < size; i++)
    cout << array[i]<< " ";
    cout << endl;
}

int main(){
   int *my_array{nullptr};
   size_t size;
   int init_value{};

   cout << "\n no of integers to be allocated : ";
   cin >> size;

   cout << "What value should b initialized to them : ";
   cin >> init_value;

   my_array = creat_array(size,init_value);
   cout << "\n-------------------" <<endl;

   display(my_array, size);

   delete[] my_array;

    return 0; 
}