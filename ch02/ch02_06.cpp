#include <iostream>
#include <cmath>

using namespace std;

int main(int args, char *argv[])
{
	for (int i = 2; i < 9999; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0 && i == j) {
				cout << i << endl;
			} else if (i % j == 0 && i != j) {
				break;
			}
		}
	}

	return 0;
}