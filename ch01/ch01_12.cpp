#include <iostream>
#include <math.h>

using namespace std;

int main(int args, char *argv[])
{
    int num = 10000;

    float r = 2, w = r / num, sum;

    for (int i = 0; i < num; i++) {
        sum += sqrt(r * r - (r - w * i) * (r - w * i)) * w;
    }

    cout << sum;

    return 0;
}