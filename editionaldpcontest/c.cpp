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
    ll n;
    cin >> n;
    vector <ll> a(n), b(n), c(n);
    ll ans[n][3] = {0};
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    ans[0][0] = a[0];
    ans[0][1] = b[0];
    ans[0][2] = c[0];

    for (int i = 1; i < n; i++) {
        chmax(ans[i][0], max(ans[i-1][1], ans[i-1][2]) + a[i]);
        chmax(ans[i][1], max(ans[i-1][0], ans[i-1][2]) + b[i]);
        chmax(ans[i][2], max(ans[i-1][0], ans[i-1][1]) + c[i]);
    }
    cout << max({ans[n-1][0], ans[n-1][1], ans[n-1][2]}) << endl;
    return 0;
}

