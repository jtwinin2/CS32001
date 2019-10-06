//Justin Twining
// Project 1 - Bigint

#include <iostream>
#include "bigint.hpp"

bigint::bigint(){ // default constructor initializing bigint to zero
  for (int i=0; i<CAPACITY; ++i)
    j_[i] = 0;
}

bigint::bigint(int b): bigint(){  //Initializing a Bigint to an int value
  for(int i=0; i < CAPACITY; ++i){
    j_[i]=b % 10;
    b /=10;
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
  bool carry = false;
  for (int i=0; i<CAPACITY; ++i){
    number = 0;
    if (carry) {
    carry = false;
    ++number;
    }
  number = j_[i] + rhs.j_[i] + number;
  if (number >= 10){
    carry = true;
    number %= 10;
  }
  result.j_[i] = number;
  }
  return result; 
}
  
bigint bigint::timesDigit(int z) const {  //multiply a bigint by a single number where 0 <= number <= 9
  bigint result;
  int carry = 0;
  int digit = 0;
  for (int i = 0; i < CAPACITY; ++i) {
    digit = (j_[i] * z) + carry;
    carry = digit/10;
    digit %= 10;
    result.j_[i]= digit;
  }
  return result;
}

bigint bigint::times10(int x) const {       //multiply a bigint by 10^n with n>0. (a.k.a. shift left base 10)
  bigint result;
  for(int i = CAPACITY-1; i >= 0; --i){
    result.j_[i] = j_[i-x];
  }
  for (int j = 0; j < x; ++j) {
    result.j_[j] = 0;
  }
  return result;
}

bigint bigint::operator* (const bigint& rhs) { //multiplies two bigints together using times10 and timesDigit
  bigint result = 0;
  bigint temp;
  for (int i = 0; i <CAPACITY-1; ++i){
    temp = *this;
    temp = temp.timesDigit(rhs.j_[i]);
    result = result + temp.times10(i);
  }
  return result;
}

std::ostream& operator<<(std::ostream& out, const bigint& L){ //Overload output operator. takes a stream and bigint as input and write the bigint to the stream. prints atmost 80 digits per line
  int i;
  int count = 0;
  for (i = CAPACITY -1; i >= 0;  --i){
    ++count;
      out<<L.j_[i]<<'|';
      if (count  % 80 ==0)
	out<<std::endl;
    }
  return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs){ //input operator
  char ch, temp [CAPACITY];
  for (int j = 0; j<CAPACITY; j++){
    temp[j]=0;
  }
  in >> ch;
  for (int i=0; i<CAPACITY && ch!=';'; ++i){
    temp[i]=ch;
    in >> ch;
  }

  rhs=bigint(temp);
  return in;
}

