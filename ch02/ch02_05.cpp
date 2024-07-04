#include <iostream>
#include <cmath>

using namespace std;

int isPerface(int num)
{
	int sum = 1, temp = num;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}

	return num == sum;
}

int main(int args, char *argv[])
{
	for (int i = 2; i < 9999; i++)
	{
		if (isPerface(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}