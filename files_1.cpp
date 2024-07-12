#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Halo mahasiswa AP 2 IT PLN!\nProgramming is Fun";

  // Close the file
  MyFile.close();
}

