#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    int num;

    cin >> num;


    while (num != 1) {
        cout << num << " ";

        if (num % 2) {
            num = num * 3 + 1;
        } else {
            num /= 2;
        }

        cout << num << endl;
    }
}