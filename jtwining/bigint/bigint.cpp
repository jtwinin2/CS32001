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
  for(int i=0; i<num; ++i){  //the numers collected are in reverse so it must be reversed and stored in j_
    j_[i]=arr[num-i-1]
      }
}

bigint::bigint(const char c[]){ //initializing a bigint to a constant char
  num=0; 
  int i=0;
  bool nzFound=false; //checks to see if it is iterating over leading zeros
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

void bigint::debugPrint(std::ostream& out) const{  // It simply prints out every element of your bigint array starting from the highend and printing a "|" between each value
  for(int i=0;i<num-1; ++i){
    out<<j_[i]<<'|';
  }
  out<<j_[i];
}

bool bigint::operator==(const bigint &L) const{
   
