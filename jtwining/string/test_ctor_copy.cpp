//  String class test program
//
//  Tests: Copy Constructor 
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
    String  s1 = "A";
    String s2 = "A";

    // VERIFY
    assert(s1 == "A");
  }


  std::cout << "Done testing Copy Constructor." << std::endl;

}
