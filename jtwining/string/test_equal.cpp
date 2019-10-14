// String class test program
//
//  Tests: Equal Constructor
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
    String str2 = "X";

    // VERIFY
    assert(str == str2);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "X x";
    String str2 = "X x";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "abcd";
    String str2 = "abcd";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "Hello World";
    String str2 = "Hello World";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "abcd abcd abcd";
    String str2 = "abcd abcd abcd";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "abcd abcd abcdabcd abcd abcd";
    String str2 = "abcd abcd abcdabcd abcd abcd";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
    String str2 = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "PX6SfPcpwAjac1V65C8T2oNuQmIbatk8Fsz5crM";
    String str2 = "PX6SfPcpwAjac1V65C8T2oNuQmIbatk8Fsz5crM";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "IVJjw69bgaKVDm1ECMUfnptiUfGTjDPgKpSSe37pcnoSg";
    String str2 = "IVJjw69bgaKVDm1ECMUfnptiUfGTjDPgKpSSe37pcnoSg";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "XZuujahkZCJH9YSg9mb4sBHEToRS44UT3uM59Y87xiAUHlVUnGWTl7LBlIP7NW2GYLZyV6bewBBFLJEjEMBzNAGfSTDCX6A2deMTZHVLeQyPKqYaX1uKP5SejGJ3qTdwedAlyAUS4xCSVCzfb6s2ll";

    String str2 = "XZuujahkZCJH9YSg9mb4sBHEToRS44UT3uM59Y87xiAUHlVUnGWTl7LBlIP7NW2GYLZyV6bewBBFLJEjEMBzNAGfSTDCX6A2deMTZHVLeQyPKqYaX1uKP5SejGJ3qTdwedAlyAUS4xCSVCzfb6s2ll";

    // VERIFY
    assert(str == str2);
  }


  std::cout << "Done testing Equal Constructor." << std::endl;

}
