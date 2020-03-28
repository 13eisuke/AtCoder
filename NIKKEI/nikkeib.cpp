#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;
const ll MOD = 998244353;
const ll inf = 1LL<<60;
const double eps = 1e-9;

ll mod_pow(ll n, ll exponent, ll mod) {
    ll pow = 1;
    while(exponent > 0) {
        if((exponent & 1) == 1) {
            pow *= n;
            pow %= mod;
        }
        n *= n;
        n %= mod;
        
        // 桁をずらす
        exponent >>= 1;
    }
    return pow;
}

ll modpow(ll a, ll b)
{
  if(b == 0) return 1; 
  return modpow(a*a%MOD, b/2)*(b%2?a:1)%MOD;
}

int main()
{
    int n, tmp, mx = -1;
    cin >> n;
    vector<ll> d(100000, 0);
    for (int i = 0 ; i < n; i++) {
        cin >> tmp;
        if (i == 0 and tmp != 0) {
            cout << 0 << endl;
            return 0;
        }
        d[tmp]++;
        chmax(mx, tmp);
    }
    ll ans = 1;

    if (d[0] != 1) {
        cout << 0 << endl;
        return 0;
    }
    ll bef = 1;
    for (int i = 1; i <= mx; i++) {
        if (d[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
        ll now = d[i];
        (ans *= mod_pow(bef, now, MOD))%=MOD;
        bef = d[i];
    }
    
    cout << ans << endl;
    return 0;
}
