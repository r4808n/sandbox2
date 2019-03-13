#include <iostream>
using namespace std;

int main() {
  const int NUM_EMPLOYEES = 3;
  int hours [NUM_EMPLOYEES];

  cout << "Enter the hors worked by " << NUM_EMPLOYEES << " Employees";

  for (int i = 0; i < NUM_EMPLOYEES; i++)
    cin >> hours[i];

  cout << "The hours you entered are: ";

  for (int i = 0; i < NUM_EMPLOYEES; i++)
  cout << " " << hours[i];

  cout << endl;
  return 0;
}