#include <iostream>

using namespace std;

float *convert(float m)
{
	float *f = (float *)malloc(2 * sizeof(float));

	f[0] = 0.0254 * m;
	f[1] = 12 * f[0];

	return f;
}

int main(int args, char *argv[])
{
	float m;

	cin >> m;

	float *res = convert(m);

	cout << *(res) << " " << *(res + 1) << endl;

	return 0;
}