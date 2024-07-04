#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    float sum = 0, temp;
    int number = 0;

    while (true)
    {
        cin >> temp;

        if (temp == -1)
        {
            break;
        }

        sum += temp;
        number++;
    }

    cout << sum / number;

    return 0;
}