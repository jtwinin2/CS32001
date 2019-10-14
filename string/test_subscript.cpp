// String class test program
//
//  Tests: Subscript Constructor
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
  String x = "hello";
    // VERIFY
  assert(x[2] == 'l');
  assert(x[4] == 'o');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "k o n e";
    // VERIFY
    assert(x[2] == 'o');
    assert(x[3] == ' ');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "Lnjc4WKOEszl6M";
    // VERIFY
    assert(x[5] == 'W');
    assert(x[0] == 'L');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "silJkpgFIWFLXN473ehu";
    // VERIFY
    assert(x[4] == 'k');
    assert(x[10] == 'F');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "Mzr2DN1mhDWRcWzQFpNE6aIHX";
    // VERIFY
    assert(x[11] == 'R');
    assert(x[15] == 'Q');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "vvyaNhRzgdxIC5M3KrMm2V6GAtj8Nq8ICvjQppeZ";
    // VERIFY
    assert(x[20] == '2');
    assert(x[1] == 'v');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "WUolRF5HTypoScgfRtrDfiDW7CsTA1j382H9KLYTwPHoLlzKHkFdtFfSDVafDvQiLOZoly9A7";
    // VERIFY
    assert(x[70] == '9');
    assert(x[60] == 'D');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "fFqXvzFfDhfobjWaokBYtkWDaa4iepHSg6jz6yoRK7InVRgdTw1guGWM4r7QKG8byh2SaGDjVNESEsDMc8uP8qZ6e2qYbv9bIYf3IdtYUuI3MORsCPHMJ0AJfcTdMo5nVq4emz32TeNQPGlE84rGU";
    // VERIFY  
    assert(x[49] == 'w');
    assert(x[74] == 'E');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "WK6ItTAvETlndVbRJDVRdKKHqlM2liee1YxvuZ11SnofgOVWUg1CT6KbweFCi92ZNYRf3hmVBjodvdZFnDs4UbMFrGeiHSjXASrpFqG1wwDQ1bJCIcRZbXQKTUTpmvUuIoFtQHYYjaMzKwzZxylmws4y5hNILS3KF8uzLNexvxZwuREe8vmybo7Q7mj8snCAW4MBnoL";
    // VERIFY
    assert(x[100] == 'F');
    assert(x[198] == 'L');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String x = "6WbZGyhXp4KNTNHQpynTBIVApXbTULpTAZblruf52VdJus1pUQYxQsKL4PNqRWw7ynYLQNcdui6fCdJNJvWSR7Rrrm4dwzNofCKNedp7lTfuKR1v5e2WWeJqwueZHmaP5ltDbir11azbDp3tTGPX1ZBU7iNOfMrdOST4FyrIsRH2ZrZh8G4CFbntMfNyJj8mq8AhSEePCgceBUDjTAQcUTxjfpUmaAsOR7KqP4M2e2suuyKfNpPjVmc";
    // VERIFY
    assert(x[0] == '6');
    assert(x[246] == 'c');
  }


  std::cout << "Done testing Subscript Constructor." << std::endl;

}
