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

int main()
{
    int n;
    cin >> n;

    ll f[n][10], p[n][11];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> f[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 11; j++) {
            cin >> p[i][j];
        }
    }
    
    ll ans = -1*inf;

    for (int mask = 1; mask < (1<<10); mask++) {
        ll cnt, tmp = 0;
        for (int i = 0; i < n; i++) {
            cnt = 0; 
            for (int j = 0; j < 10; j++) {
                if (((mask>>j) & 1) && f[i][j]) cnt++;
            }
            tmp += p[i][cnt];
        }
        chmax(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}

