#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
using namespace std;
int main(int argc, char** argv)
{
        int v[] = {11,12,13,14,15,16,17,18,19,20};

        for(unsigned long long i = 2520; i < 9999999999999; i += 2520)
        {
                std::cout << i << '\n';
                bool foundNumber = true;

                for(int j = 0; j < 10; j++)
                {
                        if(i % v[j] != 0)
                        {
                                std::cout << v[j] << " is not a factor" << '\n';
                                foundNumber = false;
                                break;
                        }
                }
                if(foundNumber == true) {
                        std::cout << "NUMBER FOUND: "<< i << '\n';
                        return 0;
                }
        }
        return 0;
}
