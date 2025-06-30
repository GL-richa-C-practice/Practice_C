#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{   
  /*int scores[]{10, 20, 30};

  for(auto score:scores)// compile will decide type
     cout << score << endl;*/
    cout << fixed << setprecision(1);
    vector<double> temperature{87.5,66.2,35.9,99.9};
    double temp_avg{};
    double temp_total{};

    for(auto temp:temperature){
      cout << temp << endl;
      temp_total += temp;
      
    }
 
    cout << "TempTotal = "<<temp_total << endl;
    temp_avg = temp_total/temperature.size();
    cout << "TempAvg =  "<< temp_avg << endl;

      

    cout << endl;
    return 0;
}