#include <iostream>
#include <fstream>

void fileioRead () {
  std::ifstream fileiotxt ("fileio-text.txt");
  if(!fileiotxt.is_open()) {
    std::cout << "Unable to open file\n";
  }
  char ch;
  fileiotxt.get(ch);
  while(ch != ' '){
    std::cout<<ch;
    fileiotxt.get(ch);
  }
  std::cout<<std::endl;
  fileiotxt.close();
}

void fileioAdd () {
  std::ifstream data1 ("fileio-data-1.txt");
  int num1;
  int num2;
  int sum;
 
 if(!data1.is_open()) {
    std::cout << "Unable to open file\n";
  }
 data1 >> num1;
 data1.get();
 data1 >> num2;

 sum = num1 + num2;

 std::cout<< num1 << " + " << num2 << " = " <<sum <<std::endl;
 data1.close();
}

int main() {

  fileioRead();
  fileioAdd();

  return 0;
}