#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll n, m, x;
    cin >> n >> m >> x;

    vector<ll> c(n);
    vector<vector<ll>> a(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    ll ans = inf;

    for (int bit = 0; bit < (1<<n); bit++) {
        vector<ll> tmp(m, 0);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                for (int j = 0; j < m; j++) {
                    tmp[j] += a[i][j];
                }
                sum += c[i];
            }
        }
        // cout << sum << endl;
        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (tmp[i] < x) ok = false;
        }
        if (ok) chmin(ans, sum);
    }

    if (ans == inf) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}

