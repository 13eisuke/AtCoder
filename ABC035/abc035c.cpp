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
    
    int n, q;
    cin >> n >> q;

    vector<int> a(n+2, 0);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    int now = 0;

    for (int i = 1; i <= n; i++) {
        now += a[i];
        if (now % 2) cout << 1;
        else cout << 0;
    }
    cout << endl;
    return 0;
}

//10110000011110000000
//10110000011110000000
