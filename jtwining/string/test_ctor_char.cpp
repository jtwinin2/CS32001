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
    String  str = "X";

    // VERIFY
    assert(str == "X");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "a";

    // VERIFY
    assert(str == "a");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "mn";

    // VERIFY
    assert(str == "mn");
  }

  std::cout << "Done testing Charactor Constructor." << std::endl;

}
