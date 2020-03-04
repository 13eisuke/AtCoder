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
    ll n, p;
    cin >> n >> p;
    
    if (p == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 1) {
        cout << p << endl;
        return 0;
    }

    vector <int> a(1000000, 0);

    for (ll i = 2; i <= 1000000; i++) {
        if (p % i != 0) continue;
        ll cnt = 0;
        while (p % i == 0) {
            cnt++;
            p /= i;
        }
        a[i] = cnt;
    }
    ll ans = 1;
    for (ll i = 2; i <= 1000000; i++) {
        if (a[i] >= n) ans *= pow(i, a[i] / n);
    }
    cout << ans << endl;

    return 0;
}

