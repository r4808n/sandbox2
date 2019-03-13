#include <iostream>
using namespace std;

int main() {
  int guess = 0;
  int number = 7;
  const int SIZE = 10;
  int hist[SIZE]{0};
  int index = 0;
  cout << "Guessing Game" << endl;
  cout << "Guess a number between 1 and 10" << endl;
  cout << "Quit with a 0 (Zero)" << endl;

  while (number != guess){
    cout << "Enter a your guess (0 ends): ";
    cin >> guess;
    hist[index] = guess;
    index = index + 1;
  
  if (guess == 0) {
    cout << "Bye quitter" << endl;
    return 1;
  }
  if (number > guess)
    cout << "Too low!" << endl;
    if (number < guess)
    cout << "Too high!" << endl;
  }
  cout << "You got it !" << endl;

  return 0;
  }
