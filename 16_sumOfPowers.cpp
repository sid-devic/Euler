#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

// sum of all digits of 2^1000. trivial with double...
//

int main(int argc, char** argv)
{
  double c = 0;
  std::vector<int> allSums;
  for(int i = 0; i < 1001; i++)
  {
    c = pow(2, i);
    string digits = to_string(c);
    std::vector<int> v;
    double sum = 0;
    for(int j = 0; j < digits.length()-7; j++){
      v.push_back(stoi(digits.substr(j, 1)));
    }
    for(int k = 0; k < v.size(); k++){
      sum+=v[k];
    }

    allSums.push_back(sum);
    int differenceInSum = allSums[allSums.size() - 1] - allSums[allSums.size() - 2];
    //printf("%lf\n", c);
    std::cout << " 2^" << i << " " << c << " " << sum << " differenceInSum with last sum is: " << differenceInSum <<'\n';
  }
  std::cout << "-----------------" << '\n';

  return 0;
}
