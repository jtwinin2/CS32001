// String class test program
//
//  Tests: Length() && Capacity()
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
    String  s = "Hello";

    // VERIFY
    assert (s.capacity() == 5);
    assert (s.length() == 5 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "XeBh68eoP5VewQF";

    // VERIFY
    assert (s.capacity() == 15);
    assert (s.length() == 15 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "xhtbTzdKlNHjYTMVNmTmd6oXE";

    // VERIFY
    assert (s.capacity() == 25);
    assert (s.length() == 25 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "rUP1VsbAURVcl2IzJD1UAz7rB3TYS1Bkkw";

    // VERIFY
    assert (s.capacity() == 34);
    assert (s.length() == 34 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "DKRz1DoXaJJOmcTyJAXWrTyJxPZxuPqP2fGkIByY5yeioLCoEI2OKwF6";

    // VERIFY
    assert (s.capacity() == 56);
    assert (s.length() == 56 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "WNgWEb3cyx2jzAHlNrVypsvv4PhZkHsyyrJoB1Kq9lCBfiunji8uZhNKjB6opW5ZzYaZxKjeWWiAjGWCqOGjoXEQfCx7PKyJYvY6j";

    // VERIFY
    assert (s.capacity() == 101);
    assert (s.length() == 101 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "5DxOQzALcu75zL6hl5DAmTQTJJf8AGuwmfpjOVQcYGMaThfPMNv3PfmqaaWNhwNyDycM9u28QhUPTqem7q1M7EPdMgOuNYUucZaRlUddaWdyZVhZRvSmjlBgusP";

    // VERIFY
    assert (s.capacity() == 123);
    assert (s.length() == 123 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "uo6GjY45RRnUods9BafIZterobjKpMjhpxx7tuOOrF1nlhw6WfznTxVgdVZqj7EbfyseWHqhTaX1unslawJkZYiEGYHY1wSM5ypNtntjF5TUkjjdNOSeVR9iMoffDE9xzfaKWuRWL9EGx1dULBOh1NB";

    // VERIFY
    assert ( s.capacity() == 151);
    assert ( s.length() == 151 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "jmf9yG2twFuNaaJBigy2TdP8IKG1mt2P92DetlUu1fsUWuHV7hBYbpLQt6FLqIWwKsc9YGt1uafLysUU2nEnCjub7v7eLy8SqDlSoSewsiJlrpPgeVvUCYHRbI9ZMGUgIY1mcErVbrHQxW9U4xqYZz8aotpN2Sye3MC4BIPALaAU77A1moV";

    // VERIFY
    assert (s.capacity() == 179);
    assert (s.length() == 179 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  s = "tfBqb8dPlGGnF22l2MqSBeY2UkvNNuxgKAL3qsN75DGlVrsDVGaYmM8RWk9YBGXntyBuCYAPB2Zu9vcSfgpmf55TlFzqh5XdPkBT8rYD15peGwN4DgbrEHoQu1qppS6m9ZBYiCRTZFLk5iKPpQbozDSJqoX3owm5QV8hc1CF4Eew4hPXQJ99z3HjjgBl3hbMgegomKhaIwEz9NNUvSiqJNix99yYBIokiTxSM7y8XPbVWB7w4blGtJfP2K";

    // VERIFY
    assert (s.capacity() == 250 );
    assert (s.length() == 250 );
  }

  std::cout << "Done testing Length() && Capacity()." << std::endl;

}

