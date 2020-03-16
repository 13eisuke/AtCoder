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
    
    int t, n, m;
    cin >> t;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector <int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    vector <bool> unused(m, true);
    int now = 0;
    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j <= a[i]+t; j++) {
            if (unused[now] and b[now] == j) {
                unused[now] = false;
                now++;
                //cout << a[i] << endl;
                break;
            }
        }
    }
    if (now == m) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}

