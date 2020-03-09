#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int A, B, m;
    cin >> A >> B >> m;
    vector <ll> a(A), b(B), x(m), y(m), c(m);
    ll a_min = inf, b_min = inf;

    for (int i = 0; i < A; i++) {
        cin >> a[i];
        chmin(a_min, a[i]);
    }

    for (int i = 0; i < B; i++) {
        cin >> b[i];
        chmin(b_min, b[i]);
    }

    for (int i = 0; i < m; i++) cin >> x[i] >> y[i] >> c[i];

    ll ans = a_min + b_min;

    for (int i = 0; i < m; i++) {
        chmin(ans, a[x[i]-1] + b[y[i]-1] - c[i]);
    }

    cout << ans << endl;

    return 0;
}

