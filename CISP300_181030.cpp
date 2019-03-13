#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "What kind of meal plan would you like to chose?" ;
  cout << "A - 7 meals a week at 560.00$ per semester" ;
  cout << "B - 14 meals a week at 1599.00$ per semester" ;
  cout << "C - Unlimited meals for 1500.00$ per semester";
  cout << "X - Exit";
  cin >> usrchoice;

  // validation
  cin >> lineIn;

  if (lineIn != "A" && lineIn != "C" && lineIn != "D" && lineIn != "B" && lineIn != "X" ) {
    cout << "Bad input." << endl;
  }

return 0;
}
