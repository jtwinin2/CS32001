//Justin Twining
// Project 1 - Bigint

#include <iostream>
#include "bigint.hpp"

bigint::bigint(){ // default constructor initializing bigint to zero
  for (int i=0; i<CAPACITY; ++i)
    j_[i] = 0;
}

bigint::bigint(int b): bigint(){  //Initializing a Bigint to an int value
  int tmp = b;
  int digits = 0;
  while (tmp != 0) {
    tmp /= 10;
    ++digits;
  }

  //puts digits into bigint using numDigits
  int divisor;
  for (int i = 0; i < CAPACITY; i++) {

    //assigns initial number to bigint
    if (digits != 0) {
      divisor = 1;
      for (int j = digits - 1; j > 0; j--) {
	divisor *= 10;
      }
      j_[--digits] = b / divisor;
      b %=  divisor;
    } else {
      //this will assign any trailing zeros to bigint
      j_[i] = 0;
    }
  }
}


bigint::bigint(const char c[]) : bigint(){ //initializing a bigint to a constant char
  //gets size of c array
  int size = 0;
  for (int i = 1; c[i] != '\0'; ++i) {
    ++size;
  }

  //puts c array into bigint
  for (int i = 0; i < CAPACITY; ++i) {
    if (i <= size) {
      j_[i] = c[size - i] - '0';
    } else {
      j_[i] = 0;
    }
  }
}




void bigint::debugPrint(std::ostream& out) const{  // It simply prints out every element of your bigint array starting from the highend and printing a "|" between each value
  int i;
 for(i=0;i<CAPACITY-1; ++i){
   out<<j_[i]<<'|';
 }
 out<<j_[i];
}

bool bigint::operator==(const bigint& rhs) const{  //compare if two bigints are equal. It returns a bool - true if equal and false other wise
  for (int i=0; i<CAPACITY; ++i){
    if (j_[i] != rhs.j_[i])
      return false;
  }
  return true;
}

int bigint::operator[] (int i) const { //subscript operator
  return j_[i];
}


bigint bigint::operator+ (const bigint& rhs) const { //Addition operator
  bigint result;  
  int number = 0;
  int carry;
  for (int i=0; i < CAPACITY; ++i) {
    number = j_[i] + rhs.j_[i] + carry;
    carry = number/10;
    number %= 10;
    result.j_[i] = number;
  }
  return result; 
}

std::ostream& operator<<(std::ostream& out, const bigint& L){ //Overload output operator. takes a stream and bigint as input and write the bigint to the stream. prints atmost 80 digits per line
  int i;
  for (i=0; i<CAPACITY; ++i){
    out<<L.j_[i]<<'|';
    if ((i+1) % 80 ==0)
      out<<std::endl;
  }
  return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs){ //input operator
  char temp[CAPACITY];
  char input;
  int i=0;

    in >> input;
  while(input != ';'){
    temp[i] = input;
    in >> input;
    ++i;
  } 
  temp[i]=0;
  rhs = bigint(temp); 
   
  return in;
}
