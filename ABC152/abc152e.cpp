
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
template<class T>bool chmax(T &a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a,T b){if(a>b){a=b;return 1;}return 0;}

ll mpow(ll a, ll b)
{
  if(b == 0) return 1; 
  return mpow(a*a%mod, b/2)*(b%2?a:1)%mod;
}

int main()
{
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll p[1000010] = {0};
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) {
        ll tmp = a[i];
        for (ll j = 2; j*j <= tmp; j++) {
            ll cnt = 0;
            while (tmp % j == 0) {
                cnt++;
                tmp /= j;
            }
            chmax(p[j], cnt);
        }
        if (tmp) chmax(p[tmp], 1LL);
    }

    ll tmp = 1;
    for (ll i = 0; i < 1000010; i++) {
        for (ll j = 0; j < p[i]; j++) {
            //cout << i << endl;
            (tmp *= i) %= mod;
        }
    }
    //cout << tmp << endl;

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        //(ans += tmp*mpow(a[i], mod-2)%mod) %= mod;
        (ans += tmp*mpow(a[i], mod-2)%mod) %= mod;
    }
    cout << ans << endl;
    return 0;
}

