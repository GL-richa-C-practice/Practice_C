#include<iostream>// peprocessor directive
#include<vector>
using namespace std;
int main()
{
 vector <int> vector1;
 vector <int> vector2;
 

 vector1.push_back(10);
 vector1.push_back(20);
 cout << vector1.at(0) <<  "\n" << vector1.at(1) << endl;
 cout << vector1.size() << endl;

 vector2.push_back(100);
 vector2.push_back(200);
 cout << vector2.at(0) << "\n" << vector2.at(1) << endl;
 cout << vector2.size() << endl;
 
 vector <vector<int>> vector_2d;

 vector_2d.push_back(vector1);
 vector_2d.push_back(vector2);
 cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
 cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

 vector1.at(0) = 1000;
 cout << vector1.at(0) <<  "\n" << vector1.at(1) << endl;

 cout << "Modifyed vector" << endl;
 cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
 // this output does not changed as it made copy of previous inputs so it did not get modified
 cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
 cout << vector_2d.size() << endl;
  return 0;
}
