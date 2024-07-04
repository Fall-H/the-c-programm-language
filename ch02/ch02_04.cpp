#include <iostream>
#include <cmath>

using namespace std;

int compute(int v, int f)
{
	return 35.74 + 0.6215 * f - 35.75 * pow(v, 0.16) + 0.4275 * f * pow(v, 0.16);
}

int main(int args, char *argv[])
{
	int res[13][19] = {0};

	int temp = 5;
	for (int i = 1; i < 13; i++, temp += 5)
	{
		res[i][0] = temp;
	}

	temp = 40;
	for (int i = 1; i < 19; i++, temp -= 5)
	{
		res[0][i] = temp;
	}

	for (int i = 1; i < 12; i++)
	{
		for (int j = 1; j < 19; j++)
		{
			res[i][j] = compute(res[i][0], res[0][j]);
		}
	}

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cout << res[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}