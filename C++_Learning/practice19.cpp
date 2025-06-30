#include <iostream>
#include<vector>
#include <cctype>

using namespace std;

void display_menu();
char get_selection();
void display_list(const vector<int>&);
void handle_display(const vector<int>&);
void handle_add(vector<int>&);
double calculate_mean(const vector<int>&);
void handle_mean(const vector<int>&);
int calculate_smallest(const vector<int>&);
void handle_smallest(const vector<int>&);
int calculate_largest(const vector<int>&);
void handle_largest(const vector<int>&);
void handle_quit();
void handle_unknown();


int main(){
  vector <int> numbers{};
  char selection{};

  do{
    display_menu();
    selection = get_selection();
    switch(selection){
    case 'P':
       handle_display(numbers);
       break;
    case 'A':
        handle_add(numbers);
        break;  
    case 'M':
        handle_mean(numbers);
        break;  
    case 'S':
        handle_smallest(numbers);
        break;      
    case 'L':
        handle_largest(numbers);
        break;  
    case 'Q':
        handle_quit();
        break;   
    default:
        handle_unknown();          
    }
  }while(selection != 'Q');

  cout << endl;
  return 0;

}


void display_menu(){

    cout << "\nP - Print numbers" << endl;
    cout << "A - Add numbers" << endl;
    cout << "M - Display Mean of numbers" << endl;
    cout << "S - Display samllest number" << endl;
    cout << "L - Display largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_selection(){
  char selection{};
  cin >> selection;
  return toupper(selection);
}

void display_list(const vector<int> &v){
  cout << "[";
  for (auto num:v)
    cout << num << " ";
  cout  << "]" << endl;  
}

void handle_display(const vector<int> &v){
  if(v.size()==0)
  cout << "[] - the list is empty" << endl;
  else 
     display_list(v);
}

void handle_add(vector<int> &v){
  int num_to_add{};
  cout << "Enter an integer:";
  cin >> num_to_add;
  v.push_back(num_to_add);
  cout << num_to_add << "Added" << endl;
}

double calculate_mean(const vector<int> &v){
  int total{};
  for(auto num:v)
   total += num;
   return static_cast<double>(total)/v.size();
}

void handle_mean(const vector<int> &v){
  if(v.size() == 0)
    cout << "Cannot calculate mean "<< endl;
  else
    cout << "Mean is: "<< calculate_mean(v) << endl ; 
}


int calculate_smallest(const vector<int> &v){
  int smallest = v.at(0);
   for(auto num: v){
    if(num < smallest)
  smallest = num;}
  return smallest;
   
}

void handle_smallest(const vector<int> &v){
  if(v.size() == 0)
    cout << "cannot find smallest - lsit is empty" << endl;
  else
    cout << "Smallest number is:" << calculate_smallest(v)<< endl;
}

int calculate_largest(const vector<int> &v){
  int largest = v.at(0);
   for(auto num: v){
    if(num > largest)
  largest = num;}

  return largest;
   
}

void handle_largest(const vector<int> &v){
  if(v.size() == 0)
    cout << "cannot find larget - list is empty" << endl;
  else
    cout << "largest number is:" << calculate_largest(v)<< endl;
}


void handle_quit(){
  cout << "GoodBye!" << endl;
}

void handle_unknown(){
  cout << "Unknown selection- try again" << endl;
}