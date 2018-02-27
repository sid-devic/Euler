#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
        std::cout << "testing console output" << '\n';
        std::vector<int> myVector;
        std::vector<int> evenFibs;

        myVector.push_back(1);
        myVector.push_back(2);

        for(int i = 1; i < 40000000; i++)
        {
                if(myVector[i] > 4000000)
                        break;
                else
                {
                        myVector.push_back(myVector[i] + myVector[i-1]);
                        std::cout << myVector[i] << '\n';
                }
        }

        for(int i = 0;i < myVector.size(); i++)
        {
          if(myVector[i] % 2 == 0){
            evenFibs.push_back(myVector[i]);
          }
        }

        int sum = 0;
        for(int i = 0; i < evenFibs.size(); i++)
          sum+=evenFibs[i];

        std::cout << sum << '\n';
        return 0;
}
