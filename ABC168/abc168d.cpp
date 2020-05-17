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

    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> ans(n, -1);
    queue<int> que;

    ans[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int n = que.front(); que.pop();
        for (int i = 0; i < graph[n].size(); i++) {
            if (ans[graph[n][i]] != -1) continue;
            ans[graph[n][i]] = n + 1;
            que.push(graph[n][i]);
        }
        //cout << "HI" << endl;
    }
    cout << "Yes" << endl;
    for (int i = 1 ; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}

