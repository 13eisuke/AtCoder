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

struct Edge {
    int to;     // 辺の行き先
    int cost; // 辺の重み
    Edge(int t, int c) : to(t), cost(c) { }
};

vector<ll> dijkstra(vector<vector<Edge>> &g, int s) {
    vector<ll> dist(g.size(), inf);

    using Pli = pair<ll, int>;
    priority_queue< Pli, vector<Pli>, greater<Pli> > que;
    dist[s] = 0;
    que.emplace(dist[s], s);

    while (!que.empty()) {
        ll cost;
        int idx;
        tie(cost, idx) = que.top();
        que.pop();
        if (dist[idx] < cost) continue;

        for (auto &e: g[idx]) {
            auto next_cost = cost + e.cost;
            if (dist[e.to] <= next_cost) continue;
            dist[e.to] = next_cost;
            que.emplace(dist[e.to], e.to);
        }
    }
    return dist;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector <vector<Edge>> G(n);

    for (int i = 0; i < n-1; i++) {
        G[i].push_back(Edge(i+1, 1));
        G[i+1].push_back(Edge(i, 1));
    }
    G[x].push_back(Edge(y, 1));
    G[y].push_back(Edge(x, 1));
    vector <int> ans(n-1, 0);

    for (int i = 0; i < n; i++) {
        vector<ll> cost = dijkstra(G, i);
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            ans[cost[j]-1]++;
        }
    }
    
    for (int i = 0; i < n-1; i++) {
        cout << ans[i]/2 << endl;
    }
    return 0;
}

