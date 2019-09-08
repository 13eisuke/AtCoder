#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int res = 0;
    for (int i = 0; i < n - 1; ++i) {
        res += s[i] == s[i + 1];
    }
    cout << min(res + 2 * k, n - 1) << '\n';
    return 0;
}
