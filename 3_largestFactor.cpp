#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

//largest prime factor of 600851475143
int main(int argc, char** argv)
{
        unsigned long long largestPrimeFactor = 0;
        for(unsigned long long j = 600851475142; j > 5; j--) {
                if(600851475142 % j == 0) {
                        printf("J value -------------------------------------- %llu\n", j);
                        bool isPrime = true;
                        for(unsigned long long i = 2; i < j / 2; i++) {
                                if(j % i == 0){
                                        isPrime = false;
                                        printf("(ivalue) %llu\n",i );
                                      }
                        }
                        if(isPrime) {
                                largestPrimeFactor = j;
                                printf("LargestPrimeFactor is: %llu\n", largestPrimeFactor );
                                break;
                        }
                }
        }
        return 0;
}
