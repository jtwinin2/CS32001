// 10/24/2019
// Fibonacci sequence using recursion and tail recursion
//

#include <iostream>

int fib (int n) {
  if ( n <= 0) {
    return 0;
  }
  else if ( n == 1){
    return 1;
  }
  else {
    return fib(n - 1) + fib(n - 2);
  }
}

int tail ( int c , int b = 1, int a = 0) {
  if ( c <= 0) {
    return a;
  }
  else if ( c == 1){
    return b;
  }
  else {
    int result;
    result =  fib(c - 1) + fib(c - 2); 
    return result;
  }
}

int main() {
  int x;
  std::cout << "Enter the number of terms in the Fibonacci Sequence you want printed : " << std::endl;
  std::cin >> x;
  std::cout << "Finonacci Series : ";
  for ( int i = 0; i < x; ++i)  
    std::cout << " " << fib(i);
  std::cout<<std::endl;

  std::cout<< "Tail Recursive   : ";
  for (int i = 0; i < x; ++i)
    std::cout << " " << tail(i);
  std::cout<< std::endl;
  
  return 0;
}
