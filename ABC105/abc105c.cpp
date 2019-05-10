#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    while (n) {
        if (n % 2) {
            s += '1';
            n -= 1;
        } else {
            s += '0';
        }
        n /= -2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}