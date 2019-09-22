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
  bool operator== (const bigint&) const; //Compares two bigints
  bigint operator+(const bigint&) const; //addition operator
  int operator[] (int) const; //subscript operator
private:
  int j_[CAPACITY];
  int num;
};

std::istream& operator>> (std::istream&,  bigint&); //input operator 

#endif /* BIGINT_HPP */
