#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    ll n;
    cin >> n;
    vector <ll> a(n), b(n), c(n), d(n), e(n+1, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        auto Iterc = lower_bound(c.begin(), c.end(), b[i]+1);
        d[i] = int(c.end() - Iterc);
    }
    for (int i = 0; i < n; i++) {
        e[i+1] = e[i] + d[i];
    }
    //reverse(e.begin(), e.end());
    //cout <<  "----" << endl;
    for (int i = 0; i < n; i++) {
        auto Iterb = lower_bound(b.begin(), b.end(), a[i]+1);
        //cout << e[n] - e[n - int(b.end() - Iterb)]  << endl;
        ans += e[n] - e[n - ll(b.end() - Iterb)];
    }
    cout << ans << endl;
	return 0;
}
