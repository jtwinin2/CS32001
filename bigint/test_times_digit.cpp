// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 3);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(45);

      // Test
      bi = bi.times_digit(2);

      // Verify
      assert(bi == 90);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(315);

      // Test
      bi = bi.times_digit(4);

      // Verify
      assert(bi == 2160);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(7531);

      // Test
      bi = bi.times_digit(3);

      // Verify
      assert(bi == 22593);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(34582);

      // Test
      bi = bi.times_digit(7);

      // Verify
      assert(bi == 242074);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(4360795);

      // Test
      bi = bi.times_digit(9);

      // Verify
      assert(bi == 39247155);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(454832107);

      // Test
      bi = bi.times_digit(2);

      // Verify
      assert(bi == 909664214);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(98432113571);

      // Test
      bi = bi.times_digit(8);

      // Verify
      assert(bi == "787465908568");
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(463313734601);

      // Test
      bi = bi.times_digit(5);

      // Verify
      assert(bi == "2316568673005");
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi("423584136698732165409684032");

      // Test
      bi = bi.times_digit(0);

      // Verify
      assert(bi == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi("654069840321069840325416546541324165");

      // Test
      bi = bi.times_digit(6);

      // Verify
      assert(bi == "3924419041926419041952499279247944990");
    }



    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;

