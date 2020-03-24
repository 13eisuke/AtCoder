#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<vector<pair<int, int>>> g;
vector<int> ans;

void dfs(int now, int pre, int pre_color) {
    int color = 1;
    for (auto next: g[now]) {
        if (next.first == pre) continue;
        if (color == pre_color) color++;
        ans[next.second] = color;
        dfs(next.first, now, color);
        color++;
    }
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    g.resize(n);
    ans.resize(n-1);

    int a, b;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        a--; b--;
        g[a].push_back({b, i});
        g[b].push_back({a, i});
    }
    
    int max_color = 0;

    for (int i = 0; i < n; i++) {
        chmax(max_color, int(g[i].size()));
    }
    cout << max_color << endl;

    dfs(0, -1, -1);

    for (int i = 0; i < n-1; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}


