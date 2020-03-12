#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
using Graph = vector<vector<int>>;

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
    
    int n;
    cin >> n;
    vector<vector<Edge>> G(n);

    int a, b, c;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back(Edge(b, c));
        G[b].push_back(Edge(a, c));
    }

    int q, k, x, y;
    cin >> q >> k;
    k--;
    vector<ll> cost = dijkstra(G, k);
    
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << cost[x-1] + cost[y-1] << endl;
    }

    return 0;
}
