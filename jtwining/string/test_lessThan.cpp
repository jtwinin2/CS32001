
// String class test program
//
//  Tests: Less Than
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
    String  str = "a";
    String str2 = "abc";

    // VERIFY
    assert( str < str2 );
  }
  
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "53153";
    String str2 = "xyz";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "5AyfEsX2v";
    String str2 = "Yz5mZwsEMz";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "2fN1A1uZrfGwxfV";
    String str2 = "rpMlU2fYjEKg724TPErT";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "!@@#$%%^&^%$#";
    String str2 = "a";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "HELLO";
    String str2 = "hello";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "abcABCABC";
    String str2 = "abcABCaBCA";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "Peter Piper Picked a Pair of Pickeled PepPeRs";
    String str2 = "Peter Piper Picked a Pair of Pickeled Peppers";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "'";
    String str2 = "jklresfhh";

    // VERIFY
    assert( str < str2 );
  }



  std::cout << "Done testing Less Than." << std::endl;

}
