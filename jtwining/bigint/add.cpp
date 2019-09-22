// Basics for openning a file for milestone 2 of Project 1.
// Justin Twining
// Project 1- Bigint

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
  std::ifstream in("data1-1.txt");    // Define stream for input
  if(!in) {                           // Make sure it opened correctly.
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  }
  bigint (int1);
  bigint (int2);
  bigint (result);
    in >> int1;              //read in first bigint
    in.get();               // move past the ';'
    in >> int2;            //read in second bigint
    std::cout<< int1 << " + " << int2 << std::endl;;
    result = int1 + int2;          //add the two bigints together
    std::cout<< "Result =" << result <<std::endl;
 
  in.close();
  return 0;
}
