// String class test program
//
//  Tests: Concatination Constructor
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
    String  str = "x";
    String str2 = "y";
    String result;
    result = str+str2;
    std::cout<< str << " " << str2 << " " <<result<<std::endl;
    // VERIFY
    assert(result == "xy");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "xyz";
    String str2 = "abc";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "xyzabc");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "qlW3KSqbFk";
    String str2 = "f6iSmJhRTl";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "qlW3KSqbFkf6iSmJhRTl");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "lZ8kmGDuKeqzqPOmvthx94jQQg46C8";
    String str2 = "SgiwD";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "lZ8kmGDuKeqzqPOmvthx94jQQg46C8SgiwD");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "4iR3duiai97SJkLuKZ4xMCdeJLhxILSrcqfOVtJ6mwYkcflJwl";
    String str2 = "hPyHzAsrARMwRJSpCWAh11dsLaFt8uWz5haF2D";
    String result;
    result = str;
    result += str2;
    // VERIFY
    assert(result == "4iR3duiai97SJkLuKZ4xMCdeJLhxILSrcqfOVtJ6mwYkcflJwlhPyHzAsrARMwRJSpCWAh11dsLaFt8uWz5haF2D");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "OihwOTb7pPZWDP55qMXFmh7zzVLMtR9Pldk9B3hEOwUEkvQKqFUyKoHcNbPoYepzqdAnplKl7T";
    String str2 = "uIdhrSBeKrSIXZ18G65VMfVer7OGxPDFJPI2uwoDRyLGizAaENapa6WYVp5U8uNeMEASVH2e7KPjdc";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "OihwOTb7pPZWDP55qMXFmh7zzVLMtR9Pldk9B3hEOwUEkvQKqFUyKoHcNbPoYepzqdAnplKl7TuIdhrSBeKrSIXZ18G65VMfVer7OGxPDFJPI2uwoDRyLGizAaENapa6WYVp5U8uNeMEASVH2e7KPjdc");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "YkhySMyB7DFrjbX4T5Q64IrSXPASHn93ClDWISFNeHHygnmDIFxVv35yXFxvFLwIWg329miBfIldV8hnGcTqTAvfUie7wACLSKyN";
    String str2 = "6WzHK6IqT7g2gi5ODrh8ICj40Rh5b4y7HVa7TxJsEU2ih3uBiHip8YlnAzaNSVXAEEsUrTeNuj3PYtdswsF8HUAvSLyFF2FBtOzVG1KHW41FRtkxySrO1UXAfPeUcYujf9vl3HkF473RD2xozE6v";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "YkhySMyB7DFrjbX4T5Q64IrSXPASHn93ClDWISFNeHHygnmDIFxVv35yXFxvFLwIWg329miBfIldV8hnGcTqTAvfUie7wACLSKyN6WzHK6IqT7g2gi5ODrh8ICj40Rh5b4y7HVa7TxJsEU2ih3uBiHip8YlnAzaNSVXAEEsUrTeNuj3PYtdswsF8HUAvSLyFF2FBtOzVG1KHW41FRtkxySrO1UXAfPeUcYujf9vl3HkF473RD2xozE6v");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "pqLUwBCwUTiDxDMq1RMkd2TlsoBJ1eqrIs7nqEfsJ2KmIe2rWQKqxVWfyMq1epgMAaCfMos4LOOq7AeeX53qup16IxxD5svJyfAA8R7iN49S1uVx5KXnTq8IZVgieqV1q4dcgFHyXo5rpFU6ACfTfU2TRQGSDpBrFayl1ki5OkaFrC7l83Sp7AdBI1BEyJlLig1RR";
    String str2 = "y";
    String result;
    result = str+str2;
    // VERIFY
    assert( result == "pqLUwBCwUTiDxDMq1RMkd2TlsoBJ1eqrIs7nqEfsJ2KmIe2rWQKqxVWfyMq1epgMAaCfMos4LOOq7AeeX53qup16IxxD5svJyfAA8R7iN49S1uVx5KXnTq8IZVgieqV1q4dcgFHyXo5rpFU6ACfTfU2TRQGSDpBrFayl1ki5OkaFrC7l83Sp7AdBI1BEyJlLig1RRy");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "8m7LL3jru2rGSw4j8wYqoJnv8aBbBrbwc8sVmetSwliW4OG9Z6THa2ylr3GGBCTqkawAFurAjUqR9DY4aqwzIF9TEPvpgrZVBSeSR1QvnA2BO5yeqi6EGxXZrHI";
    String str2 = "Di87vt4Lhf4TTtjAApWPi8GDytcJNpUwsS8hPbfYEKTC4T52aePFVh2dgyzzKryokv3FCG87vyFY2oVOqGP3iHhzlqBA53XMEQjqsxnau1n9QNs9DjMBnB8J5";
    String result;
    result = str+str2;
    // VERIFY
    assert(result == "8m7LL3jru2rGSw4j8wYqoJnv8aBbBrbwc8sVmetSwliW4OG9Z6THa2ylr3GGBCTqkawAFurAjUqR9DY4aqwzIF9TEPvpgrZVBSeSR1QvnA2BO5yeqi6EGxXZrHIDi87vt4Lhf4TTtjAApWPi8GDytcJNpUwsS8hPbfYEKTC4T52aePFVh2dgyzzKryokv3FCG87vyFY2oVOqGP3iHhzlqBA53XMEQjqsxnau1n9QNs9DjMBnB8J5");
  }


  std::cout << "Done testing Concatination Constructor." << std::endl;

}



