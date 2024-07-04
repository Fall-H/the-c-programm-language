#include <iostream>
#include <cmath>

using namespace std;

int main(int args, char *argv[])
{
	srand(time(0));

	double n = 1000000000000000, sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += rand() % 100 * 0.01;
	}

	cout << sum / n << endl;

	return 0;
}