#include<iostream>// peprocessor directive
#include<vector>
using namespace std;
int main()
{
 vector <int> test_scores {100,95};
 test_scores.push_back(60);
 test_scores.push_back(90);

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << test_scores.at(3)<< endl;
cout << test_scores.size() << endl;
  return 0;
}
