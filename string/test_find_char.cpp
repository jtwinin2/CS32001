
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
  
  {
    //------------------------------------------------------
    String str = "Hello World";

    assert(str.findch( 3 , 'r') == 8);

  }
  {
    //------------------------------------------------------
    String str = "tUZGewn3L0vzMoN";

    assert(str.findch( 5 , 'L') == 8);

  }
  {
    //------------------------------------------------------
    String str = "4F1bPhdzXtbvaLC2erc5vkAZZjZL93";

    assert(str.findch( 7 , 'k') == 21);

  }
  {
    //------------------------------------------------------
    String str = "xQ9kuKzOEvRMqlY2XJKTwmHDepd2tN8elhTwRU3Fa3eQXwCwrD";

    assert(str.findch( 0 , 'd') ==  26);

  }
  {
    //------------------------------------------------------
    String str = "jIY5Yc8XwGGX4F9v30adanSlBbFIjN2VJo9BObhJdBjbHkxrsEdS175I7cdAQ8Dy2uwcwFwnZAI";

    assert(str.findch( 1 , 'Y') == 2);

  }
  {
    //------------------------------------------------------
    String str = "FuxhpmOmnhEL1ijXAaGkF302A1R2eXc5BJAZ0jscIioiopjBnTQcngPaiNipsNMmEs06QmtXXL8sjBz26a6mTjaJ9IOsIr9uaz9EGJgJs4FIV8NAGx";

    assert(str.findch( 100 , 's') == 104);

  }
  {
    //------------------------------------------------------
    String str = "xSuyt7I4FEB0h0WcnqgufYUGjcCQ1IWv6q6UIpDAOuUiWox4gYPGwlh5DG7MefbonaxCQewQwsygFPKgggWyB7W2zYuTIXZt8sgUcJV7z7zWJU1eqEGk4QenaNWMBC1EXXLpSm8StDfPKah1IK4UYfhZ2Hl4XvjUEwVgLnT9rJgmx1BdELltYrfWPbh1qoFOXLnz3d1q";

    assert(str.findch( 50 , 'O') == 191);

  }
  {
    //------------------------------------------------------
    String str = "pQL6q5s3FX1gP6lSE8uYcN3EIKybQpH7yx5jigDXFpcNdPNGcoZJi6gOipljU1dYoZhvbjnuamzXE1vJuzyJgXSJ1MYAhjgAUct5GCAGDcUJpVrHoGV5N2mv0wcvP1zIxMGRpTYq2406Mrbn2q5yVpvCcevk5tOvS9HohZCbCHo1nk6e1BxuR56MvI3OIQCPF9Xr2rNkPhXTHG6EZyAIzsTbkDHvm3gKsXIXMo2ZCOVLBp1tKCPSu5AZiY";

    assert(str.findch( 200 , 'Y') == 249);

  }

 
  std::cout << "Done testing Find Charactor." << std::endl;

}
