#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n) {
	if (n == 1) {
		return 1;
	}

	return (double) n * (double) factorial(n - 1);
}

int main(int args, char *argv[])
{
	cout << factorial(52) / factorial(50) << endl;
}