
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
  std::ifstream file("data1_input.txt");
  if (file.is_open()) {
    String x;
    file >> x;
    assert(x == "131.123.47.176");
    file >> x;
    assert(x == "-");
    file >> x;
    assert(x == "-");
    file >> x;
    assert(x == "[18/Sep/2002:12:05:25"); 
    file >> x;
    assert(x == "-0400]"); 
   
  }
  else {
    std::cout << "Unable to open file" << std::endl;
  }
  file.close();

  std::cout << "Done testing Input." << std::endl;

}
