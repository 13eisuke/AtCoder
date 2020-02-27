#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n), ans(n+k, inf);
    for (int i = 0; i < n; i++) cin >> a[i];

    ans[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            chmin(ans[i+j], ans[i] + abs(a[i] - a[i+j]));
        }
    }
    cout << ans[n-1] << endl;
    return 0;
}

