#include<iostream>
#include<cstdlib> //random no generartion
#include<ctime>

using namespace std;
int main()
{   
   int random_no{};
   size_t count{10};
   int min{1};
   int max{6};


   cout << "Rand Max: "<< RAND_MAX<<endl;
   srand(time(nullptr));

   for(size_t i{1}; i<=count; ++i){
    random_no = rand()%max + min;
    cout << random_no << endl;
   }
    return 0;
}