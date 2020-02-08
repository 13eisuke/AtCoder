#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int limit = 50;

int n, m;
int a[limit], b[limit];
bool graph[limit][limit];
bool visited[limit];

void dfs(int now) {
    visited[now] = true;
    for (int i = 0; i < m; i++) {
        if (!graph[now][i]) continue;
        if (visited[i]) continue;
        dfs(i);
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    int ans = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) visited[j] = false;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

        dfs(0);

        bool tmp = true;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                tmp = false;
                break;
            }
        }

        if (!tmp) ans++;

        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}

