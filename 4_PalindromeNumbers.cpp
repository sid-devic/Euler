#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include<bits/stdc++.h>

//A palindromic number reads the same both ways.
//The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

//999 * 999 = 998001

//seperate into numbers with even number of digits and numbers with odd number of digits. Start from 998001
//if even -->x = toString().subString(0, digits/2)
//        -->y = toString().subString(digits/2, digits)
//        if(x.equals(y)), start checking if the number is product of two 3 digit numbers

using namespace std;

int main(int argc, char** argv)
{
  for(int i = 998001; i > 1000; i--){

    bool isNotPalindrome = true;
    std::string numAsString = to_string(i);
    std::string firstHalf = numAsString.substr(0, numAsString.size() / 2);
    string secondHalf = numAsString.substr(numAsString.size() / 2, numAsString.size() - numAsString.size() / 2);

    std::cout << "number: " << i << " First half: " << firstHalf << " Second Half: " << secondHalf << '\n';
    std::reverse(secondHalf.begin(), secondHalf.end());

    if(firstHalf.compare(secondHalf))
      std::cout << "true" << '\n';
    else{
      std::cout << "false" << '\n';
      isNotPalindrome = false;
    }

    if(!isNotPalindrome)
    {
      std::cout << "PALINDROME FOUND------------" << i << '\n';
      for(int j = 999; j > 99; j-- )
      {
        if(i % j == 0 && to_string(i / j).size() < 4 && to_string(i / j).size() > 2)
        {
          std::cout << "FOUND 3 DIGIT: " << j << " FOR NUMBER " << i << '\n';
          return 0;
        }
      }
    }
  }
  return 0;
}
