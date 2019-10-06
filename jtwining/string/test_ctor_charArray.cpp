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
    String  str = "dF7VPENfJ956q58k7JDrHU4OS0IxQTq2zbhgkC2ZY5bRqKyO4AYfiKDxX8AZeQrI5P8luMYdUh4122BjVCD745IXmS08hlzCxdOQCnKW58ss0GFVAfYl6zW9GkblzXEX4rg83tqvEow4PPBiweQByAV1KP043kxehmDxl7O3Nhh3MeGv0dA64VU3a7ffw5F0k7OBDwHLDQFZQ5CebnaiU320LU3TpXuUmk22EyarkGVuCVrPktYJ01fe3lH6jin";

    // VERIFY
    assert(str == "dF7VPENfJ956q58k7JDrHU4OS0IxQTq2zbhgkC2ZY5bRqKyO4AYfiKDxX8AZeQrI5P8luMYdUh4122BjVCD745IXmS08hlzCxdOQCnKW58ss0GFVAfYl6zW9GkblzXEX4rg83tqvEow4PPBiweQByAV1KP043kxehmDxl7O3Nhh3MeGv0dA64VU3a7ffw5F0k7OBDwHLDQFZQ5CebnaiU320LU3TpXuUmk22EyarkGVuCVrPktYJ01fe3lH6jin");
  }

    
  std::cout << "Done testing Charactor Array." << std::endl;

}
