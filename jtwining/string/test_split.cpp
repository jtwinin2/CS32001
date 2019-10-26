// String class test program
//
//  Tests: Split
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

//===========================================================================
int main ()
{
  {


    std::vector<String> test = String("Hello World").split(' ');
   
    assert(test[0] == "Hello");
    assert(test[1] == "World");
  }

  {
    std::vector<String> test = String("abc ef gh").split(' ');
 
    assert(test[0] == "abc");
    assert(test[1] == "ef");
    assert(test[2] == "gh");

  }
  {
    std::vector<String> test = String("-Ab--c-").split('-');

    assert(test[0] == "");
    assert(test[1] == "Ab");
    assert(test[2] == "");
    assert(test[3] == "c");
    assert(test[4] == "");

  }
  {
    std::vector<String> test = String("O Come").split(' ');
    std::cout<<test[0] <<"\n"<<  " " << test[1] << "\n";
    assert(test[0] == "O");
    assert(test[1] == "Come");

  }
  
  {
    std::vector<String> test = String("xyz vc ihsng eig hello").split(' ');
    std::cout<<test[0] <<"\n"<<  " " << test[1] << "\n" << test[2] << "\n" << test[3] << "\n" << test[4] << "\n";

    assert(test[0] == "xyz");
    assert(test[1] == "vc");
    assert(test[2] == "ihsng"); 
    assert(test[3] == "eig"); 
    assert(test[4] == "hello");

  }


  std::cout << "Done testing Split." << std::endl;
}
