#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ans = n;
    ll tmp = 0;

    for (int i = 0; i < n-1; i++) {
        if (a[i] < a[i+1]) tmp++;
        else {
            ans += tmp*(tmp+1)/2;
            tmp = 0;
        }
    }

    if (tmp) ans += tmp*(tmp+1)/2;

    cout << ans << endl;
    return 0;
}

