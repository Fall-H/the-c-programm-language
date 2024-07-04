#include <iostream>

using namespace std;

int main(int args, char* argv[]) {
	float m;

	cin >> m;

	float inches = 0.0254 * m;
	float feet = 12 * inches;

	cout << inches << " " << feet << endl;

	return 0;
}