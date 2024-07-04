#include <iostream>
#include <cmath>

using namespace std;

int main(int args, char *argv[])
{
	srand(time(0));

	double sum = 0;

	for (int i = 0; i < 10000; i++) {
		double x = (rand() % (1 - (-1) + 1)) + (-1);
		double y = (rand() % (1 - (-1) + 1)) + (-1);

		if ((x * x + y * y) < 1) {
			sum++;
		}
	}

	cout << endl << sum / 10000 << endl;

	return 0;
}