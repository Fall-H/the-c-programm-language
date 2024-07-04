#include <iostream>

using namespace std;

int main(int args, char* argv[]) {
    int sum, n;

    cin >> n;

    for (int i = 0, j = 1; i < n; i++, j += 2) {
        sum += j;
    }

    cout << sum;

	return 0;
}