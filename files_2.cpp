#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("..\\filename2.txt");

  // Write to the file
  MyFile << "Diambil dari filename2\nHalo mahasiswa AP 2 IT PLN!\nProgramming is Fun";
  MyFile << "\nNext Line";

  // Close the file
  MyFile.close();
  
  // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("..\\filename2.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText << endl;
}

// Close the file
MyReadFile.close();
}

