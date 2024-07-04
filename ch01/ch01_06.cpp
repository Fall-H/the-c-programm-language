#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
    int max = 0, temp, last_temp;

    while (true)
    {
        cin >> temp;

        if (temp == 0)
        {
            break;
        }

        if (max == 0)
        {
            max = temp;
            last_temp = max;
        }

        if (max < temp)
        {
            last_temp = max;
            max = temp;
        }
    }

    cout << max << " " << last_temp;

    return 0;
}