#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <fstream>
using namespace boost;
using namespace std;

// read from 13_euler.txt
// actually don't wanna do this it's dumb

int main(int argc, char** argv)
{
  ifstream inFile;
  inFile.open("13_euler.txt");
  if(!inFile){
    std::cerr << "unable to read 13_euler.txt" << '\n';
    exit(1);
  }

  unsigned long long sum = 0;
  unsigned long long x;

  while(inFile >> x)
  {
    sum += x;
  }
  std::cout << sum << '\n';
  return 0;
}
