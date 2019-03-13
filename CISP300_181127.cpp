#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outputfile;
  outputfile.open("demofile.txt", std::ios_base::app); 

    cout << "Writing to file\n";

    outputfile << "Bach\n";
    outputfile << "Beethoven\n";
    outputfile << "Mozart\n";
    outputfile << "Schubert\n";

    outputfile.close();
    cout << "Done.\n";

    return 0;
}

int alsomain() {
  ifstream inputfile;
  string name;
  inputfile.open("demofile.txt");

  cout << "Here are the names... \n";

  for (int count = 1; count <= 4; count++)
  {
    inputfile >> name;
    cout << name << endl;
  }

  inputfile.close();

  return 0;
}