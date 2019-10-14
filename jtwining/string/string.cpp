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
  str[0] = ch;
  str[1] = '\0';
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
  char * temporary = str;
  str = rhs.str;
  rhs.str = temporary;
  int hold = stringSize;
  stringSize = rhs.stringSize;
  rhs.stringSize = hold;
}

String& String::operator= ( String rhs) {    // Assignment copy
  if (str == rhs.str) return *this;  //check to see if they are already pointing to the same address
  delete [] str;
  stringSize = rhs.stringSize;
  str = new char [stringSize];
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
  int offset= length();
  int i=0;
  while(rhs.str[i]!= '\0'){
    result.str[offset + i]= rhs.str[i];
    ++i;
    if(offset + i == capacity()) break;
  }
  result.str[offset + i]=0;
  return result;
}

String operator+(char lhs, const String& rhs) {
  return String(lhs) + rhs;
}

String operator+(const char lhs[], const String& rhs) {
  return String(lhs) + rhs;
}

String& String::operator+=(const String& rhs) {
  *this = operator+(rhs);
  return *this;
}

bool String::operator==(const String& rhs) const {
  int i = 0;
  while ((str[i] != '\0') && (str[i] == rhs.str[i])) ++i;
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

bool operator<(const char lhs[], const String& rhs) {
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
  char placehold[540000];
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

/*
int String::findch(char ch) const { 
  return findch(0, ch); 
}
*/



int String::findstr(int pos, const String& rhs) const {
  int i = pos;
  if ((pos < 0) || (pos >= length() - rhs.length()))
    return -1;
  if (length() < rhs.length())
    return -1;

  while ((str[pos] != 0) && (rhs.length() + pos - 1 <= length())) {
    if (rhs == substr(i, i + rhs.length() - 1))
      return pos;
    ++i;
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

String::String (int n) {                                               //String(10) - capacity 10, empty string
  stringSize = n;
  str = new char [stringSize];
  str[0] = 0;
}

String::String (int n, const char ch[]) {                          //String(10, "abc") - capacity 10 with "abc"
  stringSize  = n;
  str = new char [n];
  for (int i = 0; i < n; ++i)
    str[i] = ch[i];
};                                                        

void    String::resetCapacity (int n ) {                            //Resets capacity to N, keeps string intact
  int smaller = stringSize;
  if (smaller > n) smaller = n;
  stringSize = n;
  char * tmp = new char [stringSize];
  for (int i = 0; i < smaller; ++i)
    tmp[i] = str[i];
  delete [] str;
  str = tmp;
}


void String::test_String() {
  String testing(5);
  assert(testing.length() == 0);
  assert(testing.capacity() == 5);

  String test(15);
  assert(test.length() == 0);
  assert(test.capacity() == 15);

  String tes(74);
  assert(test.length() == 0);
  assert(test.capacity() == 74);

  String CharArray(10, "abc");
  assert(CharArray.length() == 3);
  assert(CharArray.capacity() == 10);
}
