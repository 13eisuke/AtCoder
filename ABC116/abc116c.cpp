#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int n, now = 0, ans = 0;
    cin >> n;

    vector <int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++) {
        if (h[i] > now) {
            ans += h[i] - now;
        }
        now = h[i];
    }

    cout << ans << endl;

    return 0;
}
