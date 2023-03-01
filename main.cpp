#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(100,25) << std::endl;
  std::cout << isDivisibleBy(35,17) << std::endl;
  std::cout << isPrime(3) << std::endl;
  std::cout << isPrime(16) << std::endl;
  std::cout << isPrime(17) << std::endl;
  std::cout << nextPrime(3) << std::endl;
  std::cout << nextPrime(17) << std::endl;
  std::cout << countPrimes(3,17) << std::endl;
  std::cout << countPrimes(17,50) << std::endl;
  std::cout << isTwinPrime(3) << std::endl;
  std::cout << isTwinPrime(67) << std::endl;
  std::cout << nextTwinPrime(3) << std::endl;
  std::cout << nextTwinPrime(17) << std::endl;
  std::cout << largestTwinPrime(3,17) << std::endl;
  std::cout << largestTwinPrime(17,50) << std::endl;
  return 0;
}
