#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>

//The sum of the squares of the first ten natural numbers is,
//1^2 + 2^2 + ... + 10^2 = 385

//The square of the sum of the first ten natural numbers is,
//(1 + 2 + ... + 10)^2 = 552 = 3025

//Hence the difference between the sum of the squares of the first ten natural numbers
// and the square of the sum is 3025 − 385 = 2640.

//Find the difference between the sum of the squares of the first
//one hundred natural numbers and the square of the sum.

using namespace std;
int main(int argc, char** argv)
{
  int nums[100];
  for(int i = 0; i < 100; i++){
    nums[i] = i + 1;
    std::cout << nums[i] << '\n';
  }

  long sumOfSquares = 0;
  for(int j = 0; j < 100; j++)
  {
    sumOfSquares += (j+1)*(j+1);
  }
  std::cout << sumOfSquares << " is the sum of all the squares" << '\n';

  long squareOfSum = 0;
  for(int k = 0; k < 100; k++){
    squareOfSum += k + 1;
  }
  squareOfSum = squareOfSum * squareOfSum;
  std::cout << squareOfSum << " is the square of all the sums" << '\n';
  long long result = squareOfSum - sumOfSquares;
  std::cout << result << '\n';
  return 0;
}
