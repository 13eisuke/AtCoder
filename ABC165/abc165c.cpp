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

int n, m, q;
ll a[51], b[51], c[51], d[51];
ll ans = 0;

void dfs(vector<ll> num, ll now) {
    if (num.size() == n) {
        ll ret = 0;
        for (int i = 0; i < q; i++) {
            if (num[b[i]-1] - num[a[i]-1] == c[i]) ret += d[i];
        }
        chmax(ans, ret);
    } else {
        for (int i = now; i <= m; i++) {
            num.push_back(i);
            dfs(num, i);
            num.pop_back();
        }
    }
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> n >> m >> q;

    for (int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<ll> num;

    dfs(num, 1);

    cout << ans << endl;

    return 0;
}

