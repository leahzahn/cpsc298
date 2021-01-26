#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int numberArray[10] = {0};

  cout << "argc is: " << argc << endl;

  if (argc <= 11){
    for (int i = 0; i < argc - 1; ++i){
      if (atoi(argv[i + 1]) >= 0){
        numberArray[i] = atoi(argv[i + 1]);
      }
    }
  }
  else{
    for (int i = 0; i < 10; ++i){
      if (atoi(argv[i + 1]) >= 0){
        numberArray[i] = atoi(argv[i + 1]);
      }
    }
  }

  cout << "numberArray: {";
  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }

  cout << "}" << endl;

  return 0;
}
