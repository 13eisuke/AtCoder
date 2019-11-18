#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;
const long double PI = (acos(-1));

int main()
{
    ll n;
    cin >> n;
    ll ans = inf;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans = min(i + n/i - 2, ans);
        }
    }
    cout << ans << endl;
}

