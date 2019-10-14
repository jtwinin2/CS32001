//  String class test program
//
//  Tests: Char constructor
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "A";

    // VERIFY
    assert(s == "A");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "B";
    std::cout<< s <<std::endl; ;
    // VERIFY
    assert(s == "B");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "n";

    // VERIFY
    assert(s == "n");
  }

  std::cout << "Done testing Charactor Constructor." << std::endl;

}
