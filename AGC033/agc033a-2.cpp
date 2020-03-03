#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main()
{
    int h, w;
    cin >> h >> w;

    char g[h][w];
    queue < pair<int, int> > q;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> g[i][j];
            if (g[i][j] == '#') q.push({i, j});
        }
    }

    int ans = -1;

    while (!q.empty()) {
        int qs = int(q.size());
        ans++;

        for (int i = 0; i < qs; i++) {
            pair <int, int> x = q.front();
            q.pop();
            int now_x = x.first;
            int now_y = x.second;
            for (int j = 0; j < 4; j++) {
                int next_x = now_x + dx[j];
                int next_y = now_y + dy[j];
                if (next_x < 0 or next_x >= h or next_y < 0 or next_y >= w) continue;
                if (g[next_x][next_y] == '.') {
                    q.push({next_x, next_y});
                    g[next_x][next_y] = '#';
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}

