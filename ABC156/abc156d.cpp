#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll PowMod_RepeatSquaring(ll N, ll P, ll M) {
    if (P == 0) return 1;
    if (P%2 == 0) {
        ll t = PowMod_RepeatSquaring(N, P/2, M);
        return t*t % M;
    }
    return N * PowMod_RepeatSquaring(N, P-1, M);
}

ll modpow(ll a, ll n) {
  ll pow = 1;
  while (n > 0) {
    if (n & 1) pow = pow * a % MOD;
    a = a * a % MOD;
    n >>= 1;
  }
  return pow;
}

ll combination(ll a, ll b) {
    if ((a == b) || (b == 0)) {
        return 1;
    }
    if (a < b) return 0;
    ll ret = 1;
    for (ll i = 0; i < b; i++) {
        ret *= (a - i);
        ret %= MOD;
        ret *= modpow(i + 1, MOD - 2);
        ret %= MOD;
    }
    return ret;
}


int main()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = modpow(2, n) - 1;
    ans -= combination(n, a);
    ans -= combination(n, b);
    ans += MOD + MOD;
    ans %= MOD;
    cout << ans << endl;
    return 0;
}

