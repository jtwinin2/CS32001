
// String class test program
//
//  Tests: Find Charactor
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    String str = "Hello";

    assert(str.findch( 0 , 'e') == 1);

  }
 
  std::cout << "Done testing Find Charactor." << std::endl;

}
