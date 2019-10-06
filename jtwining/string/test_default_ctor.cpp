// String Test Program
//
//
// Tests:  default constructor, uses ==
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================

int main () {
  // Setup

  // Test 
  String str = '\0';

  // Verify
  assert(str == "\0");

  std::cout << "Done testing default constructor." << std::endl;
}
