#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date: 10/24/2019        
// Author: Justin Twining     
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
  Date            ()             {};
  void   setday   (String getDate)  { day = getDate;   };
  void   setmonth ( String getDate) { month = getDate; };
  void   setyear  (int getDate)     { year = getDate;  };

  String getday   () const       { return day;   };
  String getmonth () const       { return month; };
  int    getyear  () const       { return year;  };

private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
            Time() {};
  void sethour   (int linevalue) { hour = linevalue; };
  void setminute (int linevalue) { minute = linevalue; };
  void setsecond (int linevalue) { second = linevalue; };

  int  gethour   () const        { return hour; };
  int  getmin    () const        { return minute; };
  int  getsec    () const        { return second; };
  
  private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
         LogEntry() {};
         LogEntry(String);
  String gethost () const { return host; };
  String getbyte () const { return number_of_bytes; };

    friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);
String                  getline     (std::istream&);

#endif

