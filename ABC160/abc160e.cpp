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
    
    ll x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    vector <int> p(a), q(b), r(c);
    for (int i = 0; i < a; i++) cin >> p[i];
    for (int i = 0; i < b; i++) cin >> q[i];
    for (int i = 0; i < c; i++) cin >> r[i];

    sort(p.rbegin(), p.rend());
    sort(q.rbegin(), q.rend());

    for (int i = 0; i < x; i++) r.push_back(p[i]);
    for (int i = 0; i < y; i++) r.push_back(q[i]);

    ll ans = 0;
    sort(r.rbegin(), r.rend());

    for (int i = 0; i < x+y; i++) ans += r[i];

    cout << ans << endl;
    return 0;
}

