#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>

using namespace std;

// find the pythagorean triplet a+b+c = 1000, and find product abc

bool isPerfectSquare(int n) {
    int root(round(sqrt(n)));
    return n == root * root;
}

int main(int argc, char** argv)
{
  int aNumber;
  int bNumber;
  int cNumber;

  for(int a = 1; a < 998; a++)
  {
    for(int b = 1; b < 998; b++)
    {
      int c = (a*a) + (b*b);
      if(isPerfectSquare(c))
      {
        std::cout << "reached here" << '\n';
        if(a + b + sqrt(c) == 1000)
        {
          aNumber = a;
          bNumber = b;
          cNumber = sqrt(c);
        }
      }
    }
  }
  std::cout << aNumber << " " << bNumber << " " << cNumber << '\n';
  std::cout << aNumber * bNumber * cNumber << '\n';
  return 0;
}
