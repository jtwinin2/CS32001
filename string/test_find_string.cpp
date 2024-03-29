
// String class test program
//
//  Tests: Find String
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

    assert (str.findstr( 2 , "lo" ) == 3 );

  }
			

  {
  //------------------------------------------------------
    String str = "2yztijOJ8S";

    assert (str.findstr( 3 , "tij" ) == 3 );
  }

 
  {
    //------------------------------------------------------
    String str = "oWEk20J4ONj1SFXv35Uj";

    assert (str.findstr( 1 , "WEk2" ) == 1 );

  }
  {
    //------------------------------------------------------
    String str = "wVV1lx9nme5rkgFPgUUMVA2GcxX7Irur36ZLj36y";

    assert (str.findstr( 7 , "UUMVA2" ) == 17 );

  }
  {
    //------------------------------------------------------
    String str = "eEksBCQ42TVSGoBWCUBdUsPNsADg8wInMSXRslH7GYvfCTWIdF";

    assert (str.findstr( 10 , "B" ) == 14 );

  }
  {
    //------------------------------------------------------
    String str = "W12nOSUmCiONbmiTpsgQ9eiESLGUUEa2kUkcZoUZZFvK2ximcRCedopLgXxrnpM3J5L8c29HsviwDDEsOOfmCrv2s8AkhmyALJWT";

    assert (str.findstr( 4 , "CedopLgXxrn" ) == 50 );

  }
  {
    //------------------------------------------------------
    String str = "helloworldthisishowthiscanlook";

    assert (str.findstr( 0 , "llow" ) == 2 );

  }
  {
    //------------------------------------------------------
    String str = "kKuIWmLNHNnntpbkNyRQjgoKZi7kJwU8RFcnnaPbotSwj1L2ybAHXEJPMErvGgotysR3rJYo22Rl9wHlc4NOBCYqrkgNSkSicRTLDsbxGZbU4I7Smmm27Nh2EAWgZixszEm5yJNyBEOvarwQejtruGDBQ1aSIvKth7UcIi3qfVP4Jkl2D6jrJu8CabzOwhZk4JsgHXWeWw31unh7ypZaokUFfv2mz8TbvxhBueSuo5TEEtn4xhdY";

    assert (str.findstr( 150 , "BueSuo" ) == 227 );

  }

  				  
  std::cout << "Done testing Find String." << std::endl;

}


