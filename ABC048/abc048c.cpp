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
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    vector <int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    
    int tmp;
    for (int i = 1; i <= n-1; i++) {
        if (a[i-1] + a[i] <= x) continue;
        tmp = a[i-1] + a[i] - x;
        ans += tmp;
        a[i] = max(a[i]-tmp, 0);
        //cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}

