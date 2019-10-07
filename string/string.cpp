//Project 2 - String ADT
//Justin Twining
// 10/07/2019
// String ADT used to process the Apache Common log file and keep track of different log entries.

#include <iostream>
#include "string.hpp"
#include <cassert>

String::String() {
  str[0] = 0;
}

String::String(char ch) {
  str[0] = ch;
  str[1] = 0;
}

//REQUIRES: str.length() < capacity()
//String a("abc")
//Takes character array and turns into string array
String::String(const char X[]) {
  int i = 0;
  while (X[i] != 0) {
    if (i == capacity()) break;
    str[i] = X[i];
    ++i;
  }
  str[i] = 0;
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

int String::capacity() const {
  return (STRING_SIZE - 1);
}

//ENSURES: Retval == i where str[i] = 0
int String::length() const {
  int result = 0;
  while (str[result] != 0) 
    ++result;
  return result;
}

// retval == "xyzabc" where "xyx" + "abc"
String String::operator+(const String& rhs) const {
  String result(str);
  int offset = length(); // "= result.length()"
  int i = 0;
  while (rhs.str[i] != 0) {
    result.str[offset + i] = rhs.str[i];
    ++i;
    if ((offset + i) == capacity()) break; //Error control i.e. a.length + b.length > capacity
  }
  result.str[offset + i] = 0;
  return result;
}

String operator+(char lhs, const String& rhs) {
  return String(lhs) + rhs;
}

String operator+(const char lhs[], const String& rhs) {
  return String(lhs) + rhs;
}

String String::operator+=(const String& rhs) {
  int offset = length();
  int i = 0;
  while (rhs.str[i] != 0) {
    str[offset + i] = rhs.str[i];
    ++i;
    if ((offset + i) == capacity()) break;
  }
  str[offset + i] = 0;
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
  char buff[STRING_SIZE];
  if (!in.eof())
    in >> buff;
  else
    buff[0] = 0;
  rhs = String(buff);
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



int String::findstr(int pos, const String& st) const {
  int i = pos;
  if ((pos < 0) || (pos >= length() - st.length()))
    return -1;
  if (length() < st.length())
    return -1;
  
  while ((str[i] != 0) && (i <= length() - st.length())) {
    if (st == substr(i, i + st.length() - 1))
      return i;
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
