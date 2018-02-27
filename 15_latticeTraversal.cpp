#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <fstream>

using namespace std;
// ended up using combinatorics, didn't need directed graph
// also I can't make one so...

class node
{
  std::vector<int> connectedIndices;
  string name;
  public:
    node(string myName, std::vector<int> connected)
    {
      name = myName;
      connectedIndices = connected;
    }
    bool isTraversable(int destinationIndex)
    {
      return false;
    }
    string findName()
    {
      return name;
    }
};
int main(int argc, char** argv)
{
  std::vector<node> listOfNodes;
  std::vector<int> testIndices;
  for(int i = 0; i < 441; i++)
  {
    testIndices.push_back(i);
    new node("ahh", testIndices);
  }
  std::cout << listOfNodes[0].findName() << '\n';
  return 0;
}
