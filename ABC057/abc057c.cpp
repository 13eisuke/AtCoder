#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int cnt_digits(ll n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;

    int ans = cnt_digits(n);

    for (ll i = 1; i * i <= n; i++) {
        if (n % i != 0) continue;
        ll a = i, b = n/i;
        chmin(ans, max(cnt_digits(a), cnt_digits(b)));
    }
    cout << ans << endl;

    return 0;
}

