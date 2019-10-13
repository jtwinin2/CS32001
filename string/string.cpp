//Project 2 - String ADT
//Justin Twining
// 10/07/2019
// String ADT used to process the Apache Common log file and keep track of different log entries.

#include <iostream>
#include "string.hpp"
#include <cassert>

String::String() {            // default constructor - empty string
  stringSize = 1;
  str = new char [stringSize];
  str[0] = 0;
}

String::String(char ch) {   
  stringSize = 2;
  str = new char [stringSize];
  str[1] = '\0';
  str[stringSize - 2] = ch;
}

//REQUIRES: str.length() < capacity()
//String a("abc")
//Takes character array and turns into string array
String::String(const char X[]) {
  int i = 0;
  while (X[i] != '\0') ++i;
    stringSize = i;
    str = new char [stringSize + 1];
    for(int j = 0; j < capacity(); ++j)
      str[i] = X[i];
}

String::String(const String& rhs) {   //copy constructor
  stringSize = rhs.stringSize;
  str = new char [stringSize];
  for(int i = 0; i < capacity(); ++i)
    str[i] = rhs.str[i];
}

String::~String() {    //destructor
  delete[] str;
}

void String::swap (String& rhs) {    //Constant time swap
  char * temp = str;
  str = rhs.str;
  rhs.str = temp;
  char temp = stringSize;
  stringSize = rhs.stringSize;
  rhs.stringSize = temp;
}

String& String::operator= ( String rhs) {    // Assignment copy
  if (str == rhs.str) return *this;  //check to see if they are already pointing to the same address
  delete [] str;
  stringSize = rhs.stringSize;
  str = new char [StringSize];
  for (int i = 0; i < capacity(); ++i)
    str[i] = rhs.str[i];
  return *this;
}

//REQUIRES: 0 <= i < length()
// operator[] const --- allows access to const objects
char String::operator[](int i) const {
  assert( (i > 0) && (i < length()) );
  return str[i];
}

//REQUIRES: 0 <= i < length()
// operator[]       --- allows access / modification to non-const objects
char& String::operator[] (int i) {
  assert( (i >= 0) && (i < length() ) );
  return str[i];
}

int String::capacity() const {    //capacity = stringSize -1;
  return (stringSize - 1);
}

//ENSURES: Retval == i where str[i] = 0
int String::length() const {
  int result = 0;
  while (str[result] != '\0') 
    ++result;
  return result;
}

// retval == "xyzabc" where "xyx" + "abc"
String String::operator+(const String& rhs) const {
  String result;
  str = result.str;
  
}

String operator+(char lhs, const String& rhs) {
  return String(lhs) + rhs;
}

String operator+(const char lhs[], const String& rhs) {
  return String(lhs) + rhs;
}

String& String::operator+=(const String& rhs) {
  *this = opreator+(rhs);
  return *this;
}

bool String::operator==(const String& rhs) const {
  int i = 0;
  while ((str[i] != 0) && (str[i] == rhs.str[i])) ++i;
  return str[i] == rhs.str[i];
}

bool operator==(char lhs, const String& rhs) {
  return String(lhs) == rhs;
}

bool operator==(char lhs[], const String& rhs) {
  return String(lhs) == rhs;
}

bool String::operator<(const String& rhs) const {
  int i = 0;
  while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i])) ++i;
  return str[i] < rhs.str[i];
}

bool operator<(char lhs, const String& rhs) {
  return String(lhs) < rhs;
}

bool operator<(char lhs[], const String& rhs) {
  return String(lhs) < rhs;
}

bool operator!=(const String& lhs, const String& rhs) {
  return !(lhs == rhs) || (lhs == rhs);
}

bool operator<=(const String& lhs, const String& rhs) {
  return (lhs < rhs) || (lhs == rhs);
}

bool operator>(const String& lhs, const String& rhs) {
  return (rhs < lhs);
}

bool operator>=(const String& lhs, const String& rhs) {
  return !(lhs < rhs);
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {
  out << rhs.str;
  return out;
}

std::istream& operator>>(std::istream& in, String& rhs) {
  char placehold[543543];
  in >> placehold;
  rhs = String(placehold);
  return in;
}

//REQUIRES: 0 <= start < length()
//ENSURES:  retval == i where str[i] == ch && i >= start
//          or retval == -1 if ch != s[start.length()-1]
int String::findch(int start, char ch) const {
  if ( (start < 0) || (start >= length()) ) return -1;
  int i = start;
  while (str[i] != 0) {
    if (str[i] == ch) return i;
    ++i;
  }
  return -1;
}

int String::findch(char ch) const { 
  return findch(0, ch); 
}



int String::findstr(int pos, const String& rhs) const {
  int end = rhs.length();
  while((str[pos] != 0) && (end + start - 1 <= length())) {
    if(rhs ++ substr(pos, end + pos -1)) return pos;
    ++pos;
  }
  return -1;
}

//REQUIRES: 0 <= start <= end < length()
//ENSURES:  retval == s[start, ..., end]
String String::substr(int start, int end) const {
  if (start < 0) return String();
  if (start > end) return String();
  if (end >= length()) return String();

  String result;
  int i = start;
  while (i <= end) {
    result += str[i];
    ++i;
  }
  return result;
}
