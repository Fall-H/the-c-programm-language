#include <iostream>
#include <cmath>

using namespace std;

int main(int args, char *argv[])
{
	srand(time(0));

	double n = 10000, temp = 0;

	while (n)
	{
		temp = 0;
		for (int i = 0; i < n; i++)
		{
			if (rand() % 2)
			{
				temp++;
			}
		}
		n -= temp;
		cout << "衰变的 " << temp << " 未衰变的" << n << endl;
	}

	return 0;
}