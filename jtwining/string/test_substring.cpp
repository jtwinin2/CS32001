// String class test program
//
//  Tests: SubString
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    String str = "Hello";
    
    assert (str.substr( 0 , 2) == "Hel" ); 
  }

  {
    String str = "Hello World";

    assert (str.substr( 6 , 10) == "World" );
  }
  {
    String str = "Hello";

    assert (str.substr( 0 , 2) == "Hel" );
  }
  {
    String str = "iPdVeafxH11rA1E";

    assert (str.substr( 6 , 10) == "fxH11" );
  }
  {
    String str = "5d5vi9ckElk3cYOMIEAoXGukX";

    assert (str.substr( 8 , 16) == "Elk3cYOMI" );
  }
  {
    String str = "S2CTS9yw7YiYeROUUXUqsLWd1TZUlTTs9xMhvDuZy1cf9YwTdm";

    assert (str.substr( 0 , 40) == "S2CTS9yw7YiYeROUUXUqsLWd1TZUlTTs9xMhvDuZy" );
  }
  {
    String str = "yPB4Tn9NG9kKODTKQCv4EXY1YNpT0Y2SWck4A8CNvoviRHvCCnMsWjou61s3t9y9kC8u9pW8zsA";

    assert (str.substr( 49 , 58 ) == "nMsWjou61s" );
  }
  {
    String str = "o1C9njpUtoHcd1n0RbdQHCSoppwgCGNhMY6Hfq0HmnMK90V7hHPDBLQWTMMRo3txu3oOl7VrzUNthio7sV0Wp1ZvLfk7eblXVB67dsMd8LH2qobc267NxTK3xtGVgPouLtDBNDxWmjQiDBWyKDtCuS";

    assert (str.substr( 2 , 149 ) == "C9njpUtoHcd1n0RbdQHCSoppwgCGNhMY6Hfq0HmnMK90V7hHPDBLQWTMMRo3txu3oOl7VrzUNthio7sV0Wp1ZvLfk7eblXVB67dsMd8LH2qobc267NxTK3xtGVgPouLtDBNDxWmjQiDBWyKDtCuS" );
  }
  {
    String str = "wKttpwIrDHyV8aEm9bSra1j2JwxFWzevHZl6kXSTmNaljn5Ct1g2sEgTBSOwfDDGIcWT1cQW8tmkaKcz1Xfdpz6vBcfXyAFfzovJNPjRQcYwGv4OMSOM6j6HW9ul0RLfd83jP6g2Y4K6J2Og0beWvB5oBEdMPoXdD7CIKWVVGN980BL2Aj00vwztjqvzpHY4mz3LCSC0";

    assert (str.substr( 30 , 45) == "evHZl6kXSTmNaljn" );
  }


  std::cout << "Done testing SubString." << std::endl;

}

