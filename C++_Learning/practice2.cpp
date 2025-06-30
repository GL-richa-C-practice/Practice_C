#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector <int> elements;
  int n;

  cout << "Enter no of elements: ";
  cin >> n;

  cout << "Size of vector :" << elements.size() << endl;
  
  cout << "Enter "<< n << " Elements: ";
  for(int i = 1; i <= n; i++){
    int val;
    cin >> val;
    elements.push_back(val);
    //cout << val << endl;
  }
  
  cout << "Size of vector :" << elements.size() << endl;
  cout << "Elements of vector: ";
  for(int val: elements){
    cout << val << " ";

  }
cout << endl;

int count{};
unsigned index{};

  while(index < elements.size() && elements.at(index) != -99){
    index ++ ;
    count ++;
  }
  cout << "Count before -99 is = " << count << endl;
  
    return 0;
}
   
