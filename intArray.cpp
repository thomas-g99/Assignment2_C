#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main ( ) {
  vector<int> numberArray(10);
  int i, x;
  int number;

  for (i=0; i < 10; ++i) {
      cout << "Enter a non-negative number: " << endl;
      cin >> numberArray.at(i);
      if (numberArray.at(i) >= 0) {
        cout << endl;
      }
      else {
        cout << "That was negative enter a positive number: ";
        cin >> numberArray.at(i);
        continue;
      }
    }

  cout << "Your array is: ";
  for (x = 0; x < 10; ++x) {
    cout << numberArray.at(x) << " ";
  }
}
