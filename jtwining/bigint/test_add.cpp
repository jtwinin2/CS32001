// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
      bigint left(0);
      bigint right(0);
      bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      left.debugPrint(std::cout);
      bigint right(0);
      right.debugPrint(std::cout);
      bigint result;


      // Test
      result = left + right;

      result.debugPrint(std::cout);

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

                   

    //Add test cases as needed.

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(125);
      bigint right(538);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 125);
      assert(right  == 538);
      assert(result == 663);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(87426);
      bigint right(21456);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 87426);
      assert(right  == 21456);
      assert(result == 108882);
    }
   
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(82483157);
      bigint right(27624420);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 82483157);
      assert(right  == 27624420);
      assert(result == 110107577);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left("15732108615");
      bigint right("57681235419");
      bigint result;

      // Testcc
      result = left + right;

      // Verify
      assert(left   == "15732108615");
      assert(right  == "57681235419");
      assert(result == "73413344034");
    }

  {
    //------------------------------------------------------
    // Setup fixture
    bigint left("984135871238186");
    bigint right("441357468910486");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == "984135871238186");
    assert(right  == "441357468910486");
    assert(result == "1425493340148672");
  }
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left("18935475409451");
    bigint right("98731845097135");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == "189354754094519");
    assert(right  == "98731845097135");
    assert(result == "288086599191654 ");
  }
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left("9999999999999999999999999");
    bigint right("1");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == "9999999999999999999999999");
    assert(right  == "1");
    assert(result == "10000000000000000000000000");
  }
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left(5449);
    bigint right(5861);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == 5449);
    assert(right  == 5861);
    assert(result == 11310);
  }
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left("777777777777777777777777777777777777777777777777777777777777");
    bigint right("333333333333333333333333333333333333333333333333333333333333");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == "777777777777777777777777777777777777777777777777777777777777");
    assert(right  == "333333333333333333333333333333333333333333333333333333333333");
    assert(result == "111111111111111111111111111111111111111111111111111111111110");
  }
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left("813459732156845135497013547984023548945130654984312640632164032165");
    bigint right("3");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == "813459732156845135497013547984023548945130654984312640632164032165");
    assert(right  == "3");
    assert(result == "813459732156845135497013547984023548945130654984312640632164032168");
  }

     std::cout << "Done with testing addition." << std::endl;
}
