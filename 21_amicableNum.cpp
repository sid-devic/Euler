#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int sumOfDivisors(int num);

int main()
{

	int sum = 0;
	for(int i = 2; i < 10000; i++)
	{
		int currentSum = sumOfDivisors(i);
		if(sumOfDivisors(currentSum) == i && currentSum != i)
		{
			sum += currentSum;
		}
	}
	cout << sum << endl;
	return 0;
}

int sumOfDivisors(int num)
{
	int sum = 0;
	for(int i = 1; i < sqrt(num); i++)
	{
		if(num % i == 0)
		{
			sum += i;
			sum += num / i;
		}
	}
	sum -= num;
	return sum;
}