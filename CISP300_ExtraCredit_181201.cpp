#include <iostream>
#include <string>
using namespace std;

int main()
{

  int usrchoice;
  int number;
  cout << "**" << endl;
  cout << endl;
  cout << "This program allows the usr to manipulate a document." << endl;
  cout << "To make changes to your document, select one of the following options \n";

  cout << endl;

  cout << "1. Open document \n";
  cout << "2. Close document \n";
  cout << "3. Print document \n";
  cout << "4. Close program \n";

  cout << endl;

  cout << "Enter command: ";
  cin >> usrchoice;

    cout << endl;

  if (usrchoice == 1)
  {
    cout << "Opening document..." << endl;
    cout << endl;
    return main();
  }
  if (usrchoice == 2)
  {
    cout << "Closing document..." << endl;
    cout << endl;
    return main();
  }
    if (usrchoice == 3)
  {
    cout << "Printing Document..." << endl;
    cout << endl;
    return main();
  }
    if (usrchoice == 4)
  {
    cout << "X_X" << endl;
    cout << "Program ended, RIP" << endl;
    cout << endl;
   return 0;
  }
      if (usrchoice > 4)
  {
    cout << endl;
    cout << "invalid choice!" << endl;
    cout << endl;
    return main();
  }
}