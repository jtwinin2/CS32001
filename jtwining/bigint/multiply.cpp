// Project 1 Milestone 3
// Justin Twining
//
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
  std::ifstream in("data1-2.txt");    // Define stream for input
  if(!in) {                           // Make sure it opened correctly.
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  }
    
  bigint (lhs);
  bigint (rhs);
  bigint (result);

  while(!in.eof() && in >> lhs){
    if (!in.eof()) in >> rhs;
    //prints bigints
    std::cout << "lhs = " << lhs << std::endl << std::endl
	      << "rhs = " << rhs << std::endl << std::endl;

    //multiplies bigints and print result
    result = lhs * rhs;
    std::cout << "result = " << result << std::endl << std::endl;
   
  }
 
  in.close();
  return 0;
}
