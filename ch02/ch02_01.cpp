#include <iostream>

using namespace std;

float convert(float c) {
	return (9 / 5 * 1.0) * c + 32;
}

int main(int args, char* argv[]) {
	float c;

	cin >> c;

	cout << "now F = " << convert(c) << endl;

	return 0;
}