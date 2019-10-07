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
    String  str = "Hello";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 5 );
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "XeBh68eoP5VewQF";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 15 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "xhtbTzdKlNHjYTMVNmTmd6oXE";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 25 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "rUP1VsbAURVcl2IzJD1UAz7rB3TYS1Bkkw";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 34 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "DKR0z1DoXaJJOmcTyJAXWrTyJxPZxuPqP2fGkIByY5yeioLCoEI2OKwF6";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 57 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "WNgWEb3cyx2jzAHlN0rVypsvv4PhZkHsyyrJoB1Kq9lCBfiunji8uZhNKjB6opW5ZzYaZxKjeWWiAjGWCqOGjoXEQfCx7PKyJYvY6j";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 102 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "5DxOQzALcu75zL6hl5DAmTQTJJf8AGuwmfpjOVQcYGMaThfPMNv3PfmqaaWNhwNyDycM9u28QhUPTqem7q1M7EPdMgOuNYUucZaRlUddaWdyZVhZRvSmjlBgusP";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 123 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "uo6GjY45RR0Uods9BafIZterobjKpMjhpxx7tuOOrF1nlhw6WfznTxVgdVZqj7EbfyseWHqhTaX1unslawJkZYiEGYHY1wSM5ypNtntjF5TUkjjdNOSeVR9iMoffDE9xzfaKWuRWL9EGx1dULBOh1NB";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 151 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "LquaKvSDTpXiWrSVs2iIc5Gozmj4eNuCNSTUwv872xYbukOTKRuX7NbyXf8oxLZrABdyEe41MM5chHjJJ0pdCFKqck9Rz8eHPQ5DJ1N52gr0AiIOPOrEwrOaLujwQuH1Czc2Vm1DHX8k2AWVCLqjLY45F8b64expqccLVqpI6PIGLzfmj1r";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 179 );
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str = "jln4ZkMo6mbxknZV4pkJSW25qBb50MFaw2sXSxwMwCeIh0tJDqb1VcjqvTydybg9E1QRpoNxdLXj2uIlfdsCUHx7xVLWbHaupol7JELpi3OUbNx2wfFgw52wANQiRnwpHyxDgI3OsBXSF1dYrMkgCiQ11zMqpR7UbOjao4MlksNhpIMrYW1qeCs7fcoxmLXQIkKXea8eYBPkovuOD8Yb94OIUtEm80msZwWeNeZq3yVJuDGIuVaVopbK7D7lGQ";

    // VERIFY
    assert (str.capacity() == (STRING_SIZE - 1));
    assert (str.length() == 254 );
  }

  std::cout << "Done testing Length() && Capacity()." << std::endl;

}

