#include <iostream>

using namespace std;

int main(int args, char* argv[]) {
    int max = 0, temp;

    while (true) {
        cin >> temp;

        if (temp == 0) {
            break;
        }

        if (max == 0) {
            max = temp;
        }

        max = max > temp ? max : temp;
    }

    cout << max;

	return 0;
}