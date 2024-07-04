#include <iostream>
#include <cmath>

using namespace std;

int main(int args, char *argv[])
{
	float x = 2, g = (x * x) / 2;

	for (int i = 0; i < 100000; i++) {
		g = (g + x / g) / 2;
	}

	cout << endl << x << " " << g << endl;

	return 0;
}