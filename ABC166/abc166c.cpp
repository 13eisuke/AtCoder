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
    int n, m;
    cin >> n >> m;

    vector<ll> h(n), a(m), b(m);
    vector<bool> ok(n, true);

    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        if (h[a[i]] == h[b[i]]) {
            ok[a[i]] = false;
            ok[b[i]] = false;
        } else if (h[a[i]] < h[b[i]]) {
            ok[a[i]] = false;
        } else {
            ok[b[i]] = false;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (ok[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}

