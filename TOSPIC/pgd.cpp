#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

struct edge {
    int to, cost;
};
typedef vector<vector<edge> > AdjList;
AdjList graph;

typedef pair<int, int> P;

const int INF = 10000000;

vector<int> dist; 
vector<int> prever;

void dijkstra(int n, int s){
    dist = vector<int>(n,INF);
    prever = vector<int>(n,-1);
    dist[s] = 0;

    priority_queue<P, vector<P>, greater<P> > que;
    que.push(P(0,s));

    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(dist[v] < p.first){
            continue;
        }
        for(int i=0;i<graph[v].size();i++){
            edge e = graph[v][i];
            if(dist[e.to] > dist[v] + e.cost){
                dist[e.to] = dist[v] + e.cost;
                prever[e.to] = v;
                que.push(P(dist[e.to],e.to));
            }
        }
    }
}

vector<int> get_path(int t){ //頂点tへの最短路
    vector<int> path;
    for(; t != -1;t=prever[t]){
        path.push_back(t);
    }

    reverse(path.begin(), path.end());
    return path;
}

int main(void){
    ll n, m, t, k;
    cin >> n >> m;
    graph = AdjList(n);
    for(int i=0;i<m;i++){
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back((edge){to,cost});
    }
    dijkstra(n,0);
    
    vector<int> ans = get_path(n);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}