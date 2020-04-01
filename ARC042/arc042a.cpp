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

    vector <int> a(n, 0), b(m, 0);

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        b[i]--;
    }

    for (int i = m-1; i >= 0; i--) {
        if (a[b[i]] == 0) {
            cout << b[i] + 1 << endl;
            a[b[i]] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) cout << i+1 << endl;
    }

    return 0;
}

