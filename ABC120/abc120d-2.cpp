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

// UnionFind
struct UnionFind 
{
    vector <int> d;
    UnionFind(int n): d(n, -1) {}
    int root(int x) {
        if (d[x] < 0) return x;
        return d[x] = root(d[x]);
    }
    
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    } 
    bool same(int x, int y) { return root(x) == root(y); }
    int size(int x) { return -d[root(x)]; }
};

int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> a(m), b(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    vector <ll> ans(m);
    ans[m-1] = (ll)n * (n-1) / 2;

    UnionFind x(n);

    for (int i = m-1; i >= 1; i--) {
        ans[i-1] = ans[i];

        if (!x.same(a[i], b[i])) {
            ans[i-1] -= (ll) x.size(a[i]) * x.size(b[i]);
            x.unite(a[i], b[i]);
        } 
    }

    for (int i = 0; i < m; i++) cout << ans[i] << endl;
    return 0;
}

