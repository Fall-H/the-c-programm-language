#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    int num, temp;

    cin >> num;

    temp = num;

    while (temp) {
        for (int i = 2; i <= temp; i++) {
            if (temp % i == 0) {
                cout << i << " ";
                temp /= i;
                break;
            }
        }
    }

    return 0;
}