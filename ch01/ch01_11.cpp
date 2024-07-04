#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    int num = 1, flag = 1;
    float sum = 0;

    for (int i = 0; i < 10000; i++) {
        sum = sum + (1 / (num * 1.0)) * flag;
        flag = -flag;
        num += 2;
    }

    cout << sum * 4;

    return 0;
}