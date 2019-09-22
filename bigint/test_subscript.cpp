// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);
        assert(digit == 0);
    }
    
    {
      // Setup
      bigint bi(4457);

      // Test
      int digit = bi[3];

      // Verify
      assert(bi    == 4457);
      assert(digit == 4);
    }
    {
      // Setup
      bigint bi(26789);

      // Test
      int digit = bi[3];

      // Verify
      assert(bi    == 26789);
      assert(digit == 6);
    }
    {
      // Setup
      bigint bi(945);

      // Test
      int digit = bi[1];

      // Verify
      assert(bi    == 945);
      assert(digit == 4);
    }
    {
      // Setup
      bigint bi(642871);

      // Test
      int digit = bi[4];

      // Verify
      assert(bi    == 642871);
      assert(digit == 4);
    }
    {
      // Setup
      bigint bi(6571375);

      // Test
      int digit = bi[0];

      // Verify
      assert(bi    == 6571375);
      assert(digit == 5);
    }
    {
      // Setup
      bigint bi("421389710");

      // Test
      int digit = bi[7];

      // Verify
      assert(bi    == "421389710");
      assert(digit == 2);
    }
    {
      // Setup
      bigint bi("4397123584");

      // Test
      int digit = bi[3];

      // Verify
      assert(bi    == "4397123584");
      assert(digit == 3);
    }
    {
      // Setup
      bigint bi("46987133971258");

      // Test
      int digit = bi[10];

      // Verify
      assert(bi    == "46987133971258");
      assert(digit == 8);
    }
    {
      // Setup
      bigint bi("9784238441420587");

      // Test
      int digit = bi[15];

      // Verify
      assert(bi    == "9784238441420587");
      assert(digit == 9);
    }
    {
      // Setup
      bigint bi("6412238712387423");

      // Test
      int digit = bi[7];

      // Verify
      assert(bi    == "6412238712387423");
      assert(digit == 1);
    }
    {
      // Setup
      bigint bi("103512035854122384235211385442363841233567123543213479701297012397");

      // Test
      int digit = bi[45];

      // Verify
      assert(bi    == "103512035854122384235211385442363841233567123543213479701297012397");
      assert(digit == 5);
    }

    {
      // Setup
      bigint bi("94005440000054238712334897133654893211335741235742387632110357498713246387132168713213573210324618732106857");

      // Test
      int digit = bi[28];

      // Verify
      assert(bi    == "94005440000054238712334897133654893211335741235742387632110357498713246387132168713213573210324618732106857");
      assert(digit == 6);
    }

    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
}

