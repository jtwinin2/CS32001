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
    String str = "FhgEgdsswgegl";
    assert (str.substr( 8 , 12) == "wgegl" );
  }
  {
    String str = "SCTSywYiYeRfsUXUqsLWd1TZUlTTs9xMhvDuZy1cf9YwTdm";

    assert (str.substr( 0 , 7) == "SCTSywYi" );
  }
  {
    String str = "yPB4Tn9NG9kKODTKQCv4EXY1YNpTnY2SWck4A8CNvoviRHvCCnMsWjou61s3t9y9kC8u9pW8zsA";

    assert (str.substr( 49 , 58 ) == "nMsWjou61s" );
  }
  {
    String str = "CnjpUtoHcdnRbdQHCSoppwgCGNhMYHfqnHmnMKnVhHPDBLQWTMMRotxuoOl7VrzUNthio7sVnWp1ZvLfk7eblXVB67dsMd8LH2qobc267NxTK3xtGVgPouLtDBNDxWmjQiDBWyKDtCuS";

    assert (str.substr( 41 , 47 ) == "HPDBLQW" );
  }

  std::cout << "Done testing SubString." << std::endl;

}

