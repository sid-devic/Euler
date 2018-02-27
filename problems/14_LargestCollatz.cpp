#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <climits>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <fstream>

using namespace std;

unsigned long long collatzOdd(unsigned long long n);
unsigned long long collatzEven(unsigned long long n);
unsigned long long collatzLength(unsigned long long n);

int main(int argc, char** argv)
{
        unsigned long long maxChainLength = 2;
        unsigned long long maxCollatzNum = 2;
        for(unsigned long long i = 2; i < 1000000; i++) {
                std::cout << "---------------NEW NUM------------------" << '\n';
                unsigned long long collatzNum = i;
                unsigned long long chainLength = 0;
                do
                {
                        std::cout << collatzNum << '\n';
                        collatzNum = collatzLength(collatzNum);
                        chainLength++;
                } while(collatzNum > 1);
                std::cout << chainLength << " was the length of this collatz chain" << '\n';
                if(chainLength > maxChainLength) {
                        maxCollatzNum = i;
                        maxChainLength = chainLength;
                }
        }
        std::cout << maxCollatzNum << " is the greatest collatz number chain with length of " << maxChainLength << '\n';
        return 0;
}

unsigned long long collatzLength(unsigned long long n)
{

        if(n % 2 == 0) {
                unsigned long long g = collatzEven(n);
                return g;
        }
        else{
                unsigned long long g = collatzOdd(n);
                return g;
        }
}
unsigned long long collatzEven(unsigned long long n)
{
        return n / 2;
}
unsigned long long collatzOdd(unsigned long long n)
{
        return 3*n + 1;
}
