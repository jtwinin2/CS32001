//Justin Twining
// Project 1 - Bigint

#include <iostream>
#include "bigint.hpp"

bigint::bigint(){
  for(int i=0;i<CAPACITY;++i){
    j_[i]=0;
  }
}



