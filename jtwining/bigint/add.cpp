// Basics for openning a file for milestone 2 of Project 1.
// Justin Twining
// Project 1- Bigint

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
  std::ifstream data1("data1-1.txt");    // Define stream for input
  if(!data1) {                           // Make sure it opened correctly.
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  }
  while(!data1.eof()){
    char int1;
    char int2;
    char result;
    data1 >> int1;              //read in first bigint
    data1.get();               // move past the ';'
    data1 >> int2;            //read in second bigint
    std::cout<< int1 << " + " << int2 << std::endl;
    result= int1 + int2;
    std::cout<< "=" << result <<std::endl;
  }

  //Until end of file
  //Read two bigints
  //Print them out
  //Add them together
  //Print out results
 
  data1.close();
  return 0;
}
