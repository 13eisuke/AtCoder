#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (0 <= s-i-j and s-i-j <= k) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
