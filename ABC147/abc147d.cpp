#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll mod = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n;
    cin >> n;
    vector <ll> a(n, 0), sum(60, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (ll j = 0; j < 60; j++) {
            if (a[i] & (1LL << j)) sum[j]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < 60; i++) {
        ans += (1LL<<i)%mod * sum[i]%mod * (n-sum[i])%mod;
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}

