#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;
//prime generating integers

bool isPrime(unsigned long long g)
{
  bool isPrime = true;
  for(unsigned long long i = 2; i < sqrt(g) + 1; i++)
  {
    if(g % i == 0)
      isPrime = false;
  }
  if(g == 1)
    isPrime = true;
  if(g == 2)
    isPrime = true;
  return isPrime;
}

bool isPrime(unsigned long long g);
int main(int argc, char** argv)
{
  std::vector<unsigned long long> primeGenerators;
  primeGenerators.push_back(1);
  primeGenerators.push_back(2);
  primeGenerators.push_back(6);

  for(unsigned long long i = 10; i < 100000000; i+=2)
  {
    std::vector<unsigned long long> divisors;
    bool divisorsArePrimes = true;
    if(i % 10 == 4 || i % 10 == 6)
    {
      divisorsArePrimes = false;
      goto skip;
    }
    if(isPrime(i+1))
    {
      for(unsigned long long j = 2; j < sqrt(i); j++)
      {
        if(i % j == 0)
        {
          divisors.push_back(j);
          if(i % divisors.back() == 0)
          {
            unsigned long long k = i / divisors.back() + divisors.back();
            std::cout << k << " checking if generated value is prime" << '\n';
            if(!isPrime(k)){
              divisorsArePrimes = false;
              break;
            }
          }
          std::cout << j << " is a divisor of " << i << '\n';
        }
      }

      skip:
      std::cout << "last num is 4, 6" << '\n';
      if(divisorsArePrimes){
        primeGenerators.push_back(i);
        i+=2;
        std::cout << primeGenerators.back() << '\n';
        std::cout << "Divisors are: " << '\n';
        for(int b = 0; b < divisors.size(); b++)
          std::cout << divisors[b] << '\n';
      }
  }
  }
  std::cout << "\t\t\t--------LIST OF PRIME GENERATORS--------" << '\n';
  unsigned long long sum = 0;
  for(unsigned long long f = 0; f < primeGenerators.size(); f++)
  {
    sum += primeGenerators[f];
    unsigned long long difference = primeGenerators[f] - primeGenerators[f-1];
    std::cout << primeGenerators[f] << " difference with last prime generator: " << difference  << " mod 19 " << primeGenerators[f] % 9 << '\n';
  }
  std::cout << "sum is: " << sum << '\n';

  std::vector<unsigned long long> mandatoryDivisors;
  for(int g = 0; g < primeGenerators.size(); g++)
  {
    for(int h = 0; h < primeGenerators[g] / 2; h++)
    {
        //if()
    }
  }
  return 0;
}
