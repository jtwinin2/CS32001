//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date: 10/24/2019
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
// REQUIRES: s == a line from the input file  
// ENSURES: LogEntry is placed into their respective valuse from  the input file
//
LogEntry::LogEntry(String s) {
  std::cout << std::endl << s << "||| " <<std::endl;
    std::vector<String> vec = s.split(' ');
    //    std::cout << vec[9] << std::endl;
    if (vec.size() == 10){
      host = vec[0];  // Host is Placed in the first vector
                      // vec[1] + vec[2] are both just a -
 
      std::vector<String> DateAndTime = vec[3].split(':');    // vec[3] holds date and time and needs to be split again to separate into each.
                                                              // DateAndTime[0] = full date (day,month,year)
                                                              //DateAndTime[1] = hours , DateAndTime[2] = minutes , DateAndTime[3] = seconds
      //Split DateAndTime[0] to separate date out
      std::vector<String> DateStr = DateAndTime[0].split('/'); //DateStr[0] = day , DateStr[1] = month , DateStr[2] = year

      // Set Date
      String day = DateStr[0].substr(1,DateStr[0].length()); // Makes a substring of DateStr[0] to remove [ at beginning
      date.setday(day);
      String month = DateStr[1];
      date.setmonth(month);
      int year = DateStr[2].intConvert();
      date.setyear(year);

      // Set Time
      // Convert String to Int to set.
      time.sethour (DateAndTime[1].intConvert());
      time.setminute (DateAndTime[2].intConvert());
      time.setsecond (DateAndTime[3].intConvert());

      // Set Request and Status
      request = vec[5] + vec[6] + vec[7];
      status = vec[8];

      // Set Bytes
      if (vec[9] == '-') {
	number_of_bytes = 0;
      }
      number_of_bytes = vec[9].intConvert();
      //      std::cout << vec[9].intConvert() << std::endl;
    }
    else {                        // if vec.size != 10
	host = String();
	date = Date();
	time = Time();
	request = String();
	status = String();
	number_of_bytes = 0;
      }
}

////////////////////////////////////////////////////////// 
// REQUIRES: File to be open 
// ENSURES: vector result is loaded with LogEntry input.
//
std::vector<LogEntry> parse(std::istream& in) {
  std::vector<LogEntry> result;
  char temp;
  while (!in.eof()){
    String x;
    in.get(temp);
    while( temp != '\n'){
	x = x + temp;
	in.get(temp);       
    }
    if(in.eof()) break;
    result.push_back(x);
  }
  return result;
}


/////////////////////////////////////////////////////////
// REQUIRES: A file to already be passed in and log to have been given values
// ENSURES: Outputs LogEntry in an organized list
//
std::ostream& operator<< ( std::ostream& out, const LogEntry& log) {
  out << std::endl;
  out << "Host: " << log.host << std::endl;
  out << std::endl;

  out << "DATE :" << std::endl;
  out << "Month: " << log.date.getmonth() << std::endl;
  out << "Day: " << log.date.getday() << std::endl;
  out << "Year: " << log.date.getyear() << std::endl;
  out << std::endl;

  out << "TIME : " << std::endl;
  out << "Hour: " << log.time.gethour() << std::endl;
  out << "Minutes: " << log.time.getmin() << std::endl;
  out << "Seconds: " << log.time.getsec() << std::endl;
  out << std::endl;

  out << "Request: " << log.request << std::endl;
  out << "Status: " << log.status << std::endl;
  out << "Bytes: " << log.number_of_bytes << std::endl;
  out << std::endl;

  return out;
}

////////////////////////////////////////////////////////// 
// REQUIRES: A file to already be passed in
// ENSURES: output of everything in the vector on its own line
//
void output_all(std::ostream& out, const std::vector<LogEntry> &log) {
  for( unsigned int i = 0; i < log.size(); ++i)
    out << log[i] << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  A file to already be passed in and log has been given values
// ENSURES: Outputs the host of each LogEntry object
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
  for ( unsigned int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << std::endl;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES: bytes to be an int  
// ENSURES: return the sum of number_of_bytes of each LogEntry object
//
int byte_count(const std::vector<LogEntry> & log) {
  int sum = 0;
  for ( unsigned int i = 0; i < log.size(); ++i) {
    sum = sum + log[i].getbyte();
  }
    return sum;
}

