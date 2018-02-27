#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>

//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

//WORKS BUT TAKES 20 MINUTES hello from vim!
int main(int argc, char** argv)
{
  std::vector<unsigned long long> v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);
  for(long i = 11; i < 2000000; i += 2)
  {
    bool isPrime = true;
    long halfOfNum = i / 2;
    long index = 0;
    for(long D = 0; D < v.size(); D++){
      if(v[D] > halfOfNum){
        index = D;
        break;
      }
    }
    for(long j = 0; j < index; j++){
      if(i % v[j] == 0){
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
  long long sum = 0;
  for(int c = 0; c < v.size(); c++)
  {
    sum += v[c];
  }
  std::cout << sum << '\n';
  return 0;
}
