#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

struct Edge {
    int to;     // 辺の行き先
    int weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) { }
};

vector <vector<Edge> > a(100000+1);
int ans[100000] = {};

void dfs(int from, int now) {
    //cout << a[now].size() << endl;
    for (int i = 0; i < int(a[now].size()); i++) {
        if (a[now][i].to == from) continue;
        //cout << a[now][i].to << " " << from << endl;
        if (a[now][i].weight % 2) {
            ans[a[now][i].to] = 1 - ans[now];
        } else {
            ans[a[now][i].to] = ans[now];
        }
        //cout << from+1 << " "  << a[from][i].to+1 << endl;
        dfs(now, a[now][i].to);
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        from--; to--;
        a[from].push_back(Edge(to, weight));
        a[to].push_back(Edge(from, weight));
    }

    ans[1] = 0;
    dfs(-1, 0);
    
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}
