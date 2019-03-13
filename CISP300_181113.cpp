#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 7;

int main() { //setup test data
  int intArray[SIZE] = {6, 4, 36, -1, 1, 124, 73};

  // Now we call the sort function
  // needs start and end locations
  sort (intArray, intArray + SIZE);

  cout << "Sort array looks like this." << endl;
  for (size_t i = 0; i != SIZE; ++i)
    cout << intArray[i] << " ";

    return 0;
}