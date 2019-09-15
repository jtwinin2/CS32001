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
  friend std::ostream&  operator<< (std::ostream&, const bigint&);
  bool operator== (const bigint&) const;
private:
  int j_[CAPACITY];
  int num;
};

#endif /* BIGINT_HPP */
