#ifndef BIGINT_HPP
#define  BIGINT_HPP

class bigint {
public:
  bigint();   //default constructor
  bigint(int);
  bigint(const char[]);
  void debugPrint(std::ostream&) const;
  bool operator <<(const bigint&){return true;}
  bool operator== (const bigint&){return true;}
private:
  const int CAPACITY = 500;
};


#endif /* BIGINT_HPP */
