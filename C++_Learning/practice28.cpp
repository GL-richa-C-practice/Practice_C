#include<iostream>
#include<string>

using namespace std;

int* array_all(const int* array1, size_t arr1_size, const int* array2, size_t arr2_size){

   int *new_array{};

   new_array = new int[arr1_size*arr2_size];
   int position{0};
   for(size_t i = 0; i<arr2_size;++i){
    for(size_t j = 0; j<arr1_size;++j){
        new_array[position++] = array1[i]*array2[j];
    }
   }
return new_array;
}

void print(int array[],size_t arr_size){
    cout << "[";
    for(size_t i = 0; i < arr_size; ++i)
    cout << array[i] << " ";
    cout << "]";
    cout << endl;
}

int main(){
 const size_t array1_size{5};
 const size_t array2_size{3};

 int arr1[]{5,2,3,6,8};
 int arr2[]{3,8,5};

 cout << "Array_1: ";
 print(arr1,array1_size);

 cout << "Array_2: ";
 print(arr2,array2_size);

int *results = array_all(arr1,array1_size,arr2,array2_size);
constexpr size_t result_size{array1_size*array2_size};

cout << "Result: ";
print(results,result_size);

delete[] results;
cout << endl;

    return 0; 
}