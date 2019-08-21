#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

vector <int> to[200005];
vector <int> ans;

void dfs (int v, int p = -1) {
    for (int u = 0; u < int(to[v].size()); u++) {
        int x = to[v][u];
        if (x == p) continue;
        ans[x] += ans[v];
        dfs(x, v);
    }
}

int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    ans.resize(n);
    for (int i = 0; i < q; i++) {
        int p, x;
        cin >> p >> x;
        --p;
        ans[p] += x;
    }
    dfs(0);
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0; 

    
}
