//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author: Justin Twining      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

// DATE
//
Date::Date (String D, String M, int Y) {
  day = D;
  month = M;
  year = Y;
}

// Time
//
Time::Time ( int H, int M, int S) {
  hour = H;
  minute = M;
  second = S;
}


////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
    if (vector != 10)
      return LogEntry();
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    while ( !in.eof()){
     
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &) {
    
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>&) {

}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &) {
    
    return 0;
}

