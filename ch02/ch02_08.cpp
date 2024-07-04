#include <iostream>
#include <cmath>

using namespace std;

void findEaster(int year, int m, int n) {
	int a = year % 19, b = year % 4, c = year % 7,
		d = (19 * a + m) % 30,
		e = (2 * b + 4 * c + 6 * d + n) % 7;

	if ((d + e) < 10) {
		cout << year << ".3." << d + e + 22 << endl;
	} else {
		cout << year << ".4." << d + e - 9 << endl;
	}
}

int main(int args, char *argv[])
{
	findEaster(1573, 15, 6);
}