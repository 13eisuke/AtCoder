#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int x, max = 1;
    cin >> x;
    for (int i = 2; i < sqrt(x); i++) {
        int tmp = 0, y = 1;
        while (y <= x) {
            tmp = y;
            y *= i;
        }
        if (max <= tmp) max = tmp;
    }
    cout << max << endl;

    return 0;
}
