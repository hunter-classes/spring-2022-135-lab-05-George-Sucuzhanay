#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(100,25) << std::endl;
  std::cout << isDivisibleBy(35,17) << std::endl;
  std::cout << "<----------------------->" << std::endl;
  std::cout << isPrime(0) << std::endl;
  std::cout << isPrime(1) << std::endl;
  std::cout << isPrime(2) << std::endl;
  std::cout << isPrime(3) << std::endl;
  std::cout << isPrime(4) << std::endl;
  std::cout << isPrime(5) << std::endl;
  std::cout << "<----------------------->" << std::endl;
  std::cout << countPrimes(8,13) << std::endl;
  std::cout << "<----------------------->" << std::endl;
  std::cout << isTwinPrime(8) << std::endl;
  std::cout << nextTwinPrime(7) << std::endl;
  std::cout << "<----------------------->" << std::endl;
  std::cout << largestTwinPrime(5, 18) << std::endl;

  return 0;
}
