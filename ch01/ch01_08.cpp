#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    int num, temp, reverse = 0;

    cin >> num;

    temp = num;

    while (temp) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    cout << reverse;

    return 0;
}