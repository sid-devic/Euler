#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>

//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

int main(int argc, char** argv)
{
  std::vector<unsigned long long> v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

  for(unsigned long long i = 11; i < 9223372036854775807; i += 2){
    if(v.size() == 10001){
      std::cout << "10,001st Prime found: " << v.back() << '\n';
      return 0;
    }
    bool isPrime = true;
    for(unsigned long long j = 3; j < i; j++){
      if(i % j == 0){
        isPrime = false;
        std::cout << i << " is not prime because " << j << " is a factor" << '\n';
      }
    }
    if(isPrime)
    {
      v.push_back(i);
      std::cout << i << " -----------------------added to list of primes" << '\n';
    }
  }
  return 0;
}
