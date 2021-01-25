#include <iostream>
#include <fstream>
using namespace std;

int writeToFile(int output, string fileName) {
   ofstream outFS; // Output file stream

   // Open file
   outFS.open(fileName, ios_base::app);

   if (!outFS.is_open()) {
      cout << "Could not open file " << fileName << endl;
      return 1;
   }

   outFS << output << endl;

   // Done with file, so close
   outFS.close();

   return 0;
}


int readFromFile(string fileName) {
   ifstream inFS;   // Input file stream
   int fileNum;     // File data

   // Open file
   cout << "Opening file " << fileName << endl;
   inFS.open(fileName);

   if (!inFS.is_open()) {
      cout << "Could not open file " << fileName << endl;
      return 1;
   }

   // Print read numbers to output
   cout << "Reading and printing numbers." << endl;

   inFS >> fileNum;
   while (!inFS.fail()) {
     // check if num is even
     if (fileNum % 2 == 0){
       // if even write num to file
       writeToFile(fileNum, "outputFile.txt");
     }
      inFS >> fileNum;
   }

   if (!inFS.eof()) {
      cout << "Input failure before reaching end of file." << endl;
   }

   cout << "Closing file " << fileName << endl;

   // Done with file, so close it
   inFS.close();

   return 0;
}

int main(int argc, char** argv){

  readFromFile("inputFile.txt");

  return 0;
}
