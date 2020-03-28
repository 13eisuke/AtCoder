#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// gcd
ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
};

//　最小公倍数
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
};

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

// ワーシャルフロイド
void warshallfloyd(vector< vector< int > >& graph) {
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph.size(); j++) {
            for (int k = 0; k < graph.size(); k++) {
                chmin(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }
}

// ダイクストラ
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

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}