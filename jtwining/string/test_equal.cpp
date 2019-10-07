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
    String  str = "PX6SfPcpwAjac1V65C8T2oNuQmIbatk8FszO5crM";
    String str2 = "PX6SfPcpwAjac1V65C8T2oNuQmIbatk8FszO5crM";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "MJOs78oibCli4UntHpe044Dp6qetJ2gEmSE74sQFFpAtw6e77byTQsN2KU7F1NyYHxhCCarO0ScrzEBqWm9Q5MLmAeSd6NFR7bul";
    String str2 = "MJOs78oibCli4UntHpe044Dp6qetJ2gEmSE74sQFFpAtw6e77byTQsN2KU7F1NyYHxhCCarO0ScrzEBqWm9Q5MLmAeSd6NFR7bul";

    // VERIFY
    assert(str == str2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "BgUQPojuL51Rk6apRhMomb3ZQV756PwcQqXv53SmrKEAUTkxTFIzVmjiq3zOA26pk7WMRv7O7a6tYWluiL6FizpPkW3SFIFsK3atWT6qawPqN1ONHzlj3UPD7zdd8x8FLcWZICgRIWCNpMABGz4gdFoRLpI2JZnBccC1I3UTlnK5xK4Ri6HTN8iKvKeeVvfZnlOjjVKDotdTdCUICAS8bA787onb6nuwry00WWhBP52eoApDpFieO2xagNUy7";

    String str2 = "BgUQPojuL51Rk6apRhMomb3ZQV756PwcQqXv53SmrKEAUTkxTFIzVmjiq3zOA26pk7WMRv7O7a6tYWluiL6FizpPkW3SFIFsK3atWT6qawPqN1ONHzlj3UPD7zdd8x8FLcWZICgRIWCNpMABGz4gdFoRLpI2JZnBccC1I3UTlnK5xK4Ri6HTN8iKvKeeVvfZnlOjjVKDotdTdCUICAS8bA787onb6nuwry00WWhBP52eoApDpFieO2xagNUy7";

    // VERIFY
    assert(str == str2);
  }


  std::cout << "Done testing Equal Constructor." << std::endl;

}
