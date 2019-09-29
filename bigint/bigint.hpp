//Justin Twining
//Project 1 - Bigint

#ifndef BIGINT_HPP
#define  BIGINT_HPP

const int CAPACITY = 400;

class bigint {
public:
  bigint();   //default constructor
  bigint(int);
  bigint(const char[]);
  void debugPrint(std::ostream&) const;
  friend std::ostream&  operator<< (std::ostream&, const bigint&); //output operator
  friend std::istream& operator>> (std::istream&,  bigint&); //input operator
  bool operator== (const bigint&) const; //Compares two bigints
  bigint operator+(const bigint&) const; //addition operator
  int operator[] (int) const; //subscript operator
  bigint timesDigit(int) const;
  bigint times10(int) const;
  bigint operator* (const bigint&);
private:
  int j_[CAPACITY];
};
 

#endif /* BIGINT_HPP */
