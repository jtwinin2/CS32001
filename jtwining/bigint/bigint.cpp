//Justin Twining
// Project 1 - Bigint

#include <iostream>
#include "bigint.hpp"

bigint::bigint(){ // default constructor initializing bigint to zero
  num=0;
}

bigint::bigint(int b): bigint(){  //Initializing a Bigint to an int value
  int arr[CAPACITY]; //declaring an array of capacity
  num=0;
  while(b){     //while loop to extract the last digit and remove it
    arr[num]=b%10;
    b/=10;
    ++num;
  }
  for(int i=0; i<num; ++i){  //the numbers collected are in reverse so it must be reversed and stored in j_
    j_[i]=arr[num-i-1];
  }
}

bigint::bigint(const char c[]){ //initializing a bigint to a constant char
  num=0;
  int i=0;
  bool nzFound=false; //checks to see if it is iterating over leading zeros - no zero found
  while(c[i]!='\0'){
    if(!nzFound && c[i]=='0'){ //if it is iterating over zeros, dont store that digit
      ++i;
      continue;
    }
    nzFound=true;
    j_[num]=c[i]-'0'; //converting ascii value to an integer
    ++num;
    ++i;
  }
}

void bigint::debugPrint(std::ostream& out) const{  // It simply prints out every element of your bigint array starting from the highen d and printing a "|" between each value
  int i;
 for(i=0;i<num-1; ++i){
   out<<j_[i]<<'|';
 }
 out<<j_[i];
}

bool bigint::operator==(const bigint &L) const{  //compare if two bigints are equal. It returns a bool - true if equal and false other wise
  if(num !=L.num)
    return false;
 for(int i=0;i<num; ++i){
   if(j_[i] !=L.j_[i])
     return false;
 }
 return true;
}

int bigint::operator[] (int i) const { //subscript operator
  return j_[i];
}

bigint bigint::operator+ (const bigint& rhs) const { //Addition operator
  bigint result; 
  for(int i=0; i < CAPACITY; ++i) {         //iterating through and adding the left and right sides together.
    result.j_[i] = j_[i] + rhs.j_[i]; 
  }
  return result;
}

std::ostream& operator<<(std::ostream& out, const bigint& L){ //Overload output operator. takes a stream and bigint as input and write the bigint to the stream. prints atmost 80 digits per line
  int i;
 for (i=0; i<L.num; ++i){
   out<<L.j_[i]<<'|';
   if ((i+1)%80==0)
   out<<'\n';
 }
 return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs){ //input operator
  char temp[CAPACITY];
  char input;
  int i=0;

  if(!in.eof()){          // if not the end of file and while it is not at a ";" read in and iterate
    in >> input;
  while(input != ';'){
    temp[i] = input;
    in >> input;
    ++i;
  }
  else break;
  temp[i]=0;
  rhs = bigint(temp);  //convert to bigint
  } 
  return in;
}
