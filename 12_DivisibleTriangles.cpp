#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <boost/algorithm/string.hpp>

using namespace boost;
using namespace std;

// triangle numbers with more than 500 divisors. 7th triangle number is 1 + 2 + 3 + 4 +... + 7 = 28.
//

int main(int argc, char** argv)
{
  long long TriangleNumber = 3;
  for(long long i = 3; i < 80000000; i++)
  {
    // get the i'th triangle number
    TriangleNumber += i;
    std::cout << TriangleNumber << " is current triangle number" << '\n';
    int divisorCount = 0;

    for(int j = 1; j <= sqrt(TriangleNumber); j++)
    {
      if(TriangleNumber % j == 0){
        divisorCount += 2;
        std::cout << TriangleNumber << " has " << divisorCount << " divisors" << '\n';
      }
      if(divisorCount > 500){
        std::cout << TriangleNumber << " has over 500 divisors" << '\n';
        return 0;
      }
    }

  }
  return 0;
}
