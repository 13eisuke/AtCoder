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
    
    int h, w;
    cin >> h >> w;

    vector<vector<int>> dist(h, vector<int>(w, int_inf));

    char grid[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }

    if (grid[0][0] == '#') dist[0][0] = 1;
    else dist[0][0] = 0;
    
    queue<pair<int, int>> que;
    que.push(make_pair(0, 0));

    while (!que.empty()) {
        auto now = que.front();
        que.pop();
        int now_x, now_y, next_x, next_y, cost;
        now_x = now.first;
        now_y = now.second;

        for (int i = 0; i < 2; i++) {
            next_x = now_x + dx[i];
            next_y = now_y + dy[i];
            if (next_x < 0 or next_x >= h or next_y < 0 or next_y >= w) continue;
            cost = dist[now_x][now_y];
            if (grid[now_x][now_y] == '.' and grid[next_x][next_y] == '#') cost++;
            if (cost < dist[next_x][next_y]) {
                dist[next_x][next_y] = cost;
                que.emplace(make_pair(next_x, next_y));
            }
        }
    }
    cout << dist[h-1][w-1] << '\n';
    
    return 0;
}