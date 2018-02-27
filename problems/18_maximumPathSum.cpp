#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <fstream>

// https://projecteuler.net/problem=18
using namespace std;

int main(int argc, char *argv[])
{
  string foo [10][10]{};
  ifstream afile("18_euler.txt");
  if (afile.is_open()){
    int counter = 0;
    for(int i = 0; i < 10; i++)
    {
      afile >> foo[i][counter];
    }
    afile.close();
  }
  else {
    cerr << "Unable to open file\n";
  }
  std::cout << foo << '\n';
  return 0;
}
