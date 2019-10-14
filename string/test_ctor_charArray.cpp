//  String class test program
//
//  Tests: Charactor Array
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
    String  str = "Hello";

    // VERIFY
    assert(str == "Hello");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "World";

    // VERIFY
    assert(str == "World");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "Hello World";

    // VERIFY
    assert(str == "Hello World");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "What is up";

    // VERIFY
    assert(str == "What is up");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "asdfasdf adsf jfdasd asdfdasdfdsa";

    // VERIFY
    assert(str == "asdfasdf adsf jfdasd asdfdasdfdsa");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "x x x x";

    // VERIFY
    assert(str == "x x x x");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "asdfkljahg asglkjhadfg afsdglkjadhfgkljadfglkjadfglkjadfgkjlh adfglkjhadfglkaj";

    // VERIFY
    assert(str == "asdfkljahg asglkjhadfg afsdglkjadhfgkljadfglkjadfglkjadfgkjlh adfglkjhadfglkaj");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "peter piper picked a pair of pickled peppers";

    // VERIFY
    assert(str == "peter piper picked a pair of pickled peppers");
  }

    
  std::cout << "Done testing Charactor Array." << std::endl;

}
