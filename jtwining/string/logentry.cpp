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


////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10){
     
    }

    if(vec.size() != 10{
	host = String();
	date = Date();
	time = Time();
	request = String();
	status = String();
	number_of_bytes = 0;
	isEmpty = true;
      }
}

////////////////////////////////////////////////////////// 
// REQUIRES: File to be open 
// ENSURES: vector result is loaded with LogEntry input.
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    char ch;
    while (!in.eof()){
      String x;
      in.get(ch);
      while( ch != '\n'){
	while ( !in.eof()){
	  x = x + ch;
	  in.get(ch);
	}
      }
      result.push_back(x);
    }  
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: output of everything in the vector on its own line
//
void output_all(std::ostream& out, const std::vector<LogEntry> &log) {
  for( int i = 0; i < log.size(); ++i)
    out << log[i] << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
  for ( int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << std::endl;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES: bytes to be an int  
// ENSURES: return the sum of number_of_bytes of each LogEntry object
//
int byte_count(const std::vector<LogEntry> & log) {
  int sum = 0;
  for( int i = 0; i < log.size(); ++i) {
    sum += log[i].getbytes();
  }
    return sum;
}

/////////////////////////////////////////////////////////
//
//
 String String::getline(std::istream& in) {
   String getDate;
   char ch = '\0';

   for (int i = (in.get(ch), 0); (ch != '\n') && (!in.fail()); ++i, in.get(ch)) {
     if (i == ( getDate.length() ))
       getDate.resetCapacity(getDate.length() * 2);
     getDate = getDate + ch;
   }

   return getDate;
 }
