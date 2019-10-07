
// String class test program
//
//  Tests: input
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <fstream>
//===========================================================================
int main ()
{
  std::ifstream file("data_input.txt");
  if (file.is_open()) {
    String x;
    file >> x;
    assert(x == "hello");
    file >> x;
    assert(x == "world");
    file >> x;
    assert(x == "my");
    file >> x;
    assert(x == "name"); 
    file >> x;
    assert(x == "is"); 
    file >> x;
    assert(x == "Justin");
  }
  else {
    std::cout << "Unable to open file" << std::endl;
  }
  file.close();

  std::cout << "Done testing Input." << std::endl;

}
