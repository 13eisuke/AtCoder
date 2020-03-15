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
    
    int n, m;
    cin >> n >> m;
    int x[26] = {}, y[26] = {};

    char tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        x[tmp - 'A']++;
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        y[tmp - 'A']++;
    }
    
    int ans = 0;

    for (int i = 0; i < 26; i++) {
        if (x[i] > 0 and y[i] == 0) {
            cout << -1 << endl;
            return 0;
        }
        if (y[i] == 0) continue;
        chmax(ans, (x[i]-1)/y[i] + 1);
    }
    cout << ans << endl;
    
    return 0;
}

