#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 2147483647;
const double eps = 1e-9;
typedef pair<int, int> P;

int sx, sy, gx, gy;
char maze[20][20];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int H, W;

int bfs (int sx, int sy, int gx, int gy) {
    int d[20][20];
    queue<P> que;
    for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) d[i][j] = inf;
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    
    while (que.size()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            if (0 <= nx && nx < H && 0 <= ny && ny < W && maze[nx][ny] != '#' && d[nx][ny] == inf) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    if (d[gx][gy] == inf) return 0;
    return d[gx][gy];
}

int main()
{
    int ans = 0;
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> maze[i][j];
        }
    }

    for (sx = 0; sx < H; sx++) {
        for (sy = 0; sy < W; sy++) {
            for (gx = 0; gx < H; gx++) {
                for (gy = 0; gy < W; gy++) {
                    if (sx == gx && sy == gy) continue;
                    if (maze[sx][sy] == '#' or maze[gx][gy] == '#') continue;
                    ans = max(bfs(sx, sy, gx, gy), ans);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

