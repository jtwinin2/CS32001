
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
    String  str = "ASLKJSHDG:LSFGL:KSFGLKSJHFGLKJ";
    String str2 = "x67R5RqEHFWqXXIp4C59p0Cjes4DbAlCgzOAPAne8JF77hffxcercQC5sLkseWCmFJuG4mdwFaCPMQ3QL46hZsoeXANw2kTOxEDPBg9UcSCChYyG08ueF5GgT3G3MxcwT6yZoGqehPxu4F0BoTK8q0Cb9OK1mWJ3PYuHbqnoQvG6TM8w6MRdDwzdlKgb2RF7KalrnBmFS93BwKMH4QwkKRBmJ7NODcEjnPbtXQEWd6HShcQfSV8jHskGKPr44";

    // VERIFY
    assert( str < str2 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "'";
    String str2 = "uod9NMp2AwTWenIzhPq6NpF3L0uSmZygI8kw1Y0bZrKYsgr2jFxgfUM8UOOgc2K8HuUCgO5JaPOW34WXMCyHoApfIwMRuVwBrhUSUJ7QOZGsz5fpxrEzWJcLn0TtbAlGO7rnrPvu7xXvxpZQV6gUU4ftWVJuHWd7SPaT2BQKARSPFsVjTuxBItoo6nCPbBLemifKfrIUXKmVuFEQ30OjoURYFbf3tUUG1DPVbvoGBNUYo7L3iZxD5DBwnbBtm";

    // VERIFY
    assert( str < str2 );
  }



  std::cout << "Done testing Less Than." << std::endl;

}
