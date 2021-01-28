#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void inputData(float &feet, float &inches)
  {
         cout << "Feet: ";
         cin >> feet;
         cout << "Inches: ";
         cin >> inches;
  }

void calcFeetInches(float feet, float inches, float &meters, float &cm){
    feet = feet + inches/12;
    meters = feet* 0.3048;
    cm = meters * 100;
  }

void output(float meters, float cm) {
  cout << "Converted it is " << meters << " meters" << " and " << cm << " cm." << endl;
}


int main() {
	 float feet, inches, meters, cm;
   string answer;
    while (answer != "exit"){
    cout << " Feet and inches to meters and centimeters" << endl;
		inputData(feet,inches);
	  calcFeetInches(feet,inches, meters, cm);
	  output(meters,cm);
    cout<<"To stop program enter 'exit': "<<endl;
    cin>>answer;
  }

return 0;
}
