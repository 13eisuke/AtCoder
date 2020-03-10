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
 
int score[50][50] = {};
bool visited[50][50] = {false};
 
int main()
{
    int h, w, cnt = 0;
    cin >> h >> w;
 
    char grid[h][w];
 
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') cnt++;
        }
    }
    
    score[0][0] = 1;
 
    queue< pair<int, int> > que;
    que.push(make_pair(0, 0));
 
    while (!que.empty()) {
        auto now = que.front();
        que.pop();
 
        int now_x = now.first;
        int now_y = now.second;
 
        for (int i = 0; i < 4; i++) {
            int nx = now_x + dx[i];
            int ny = now_y + dy[i];
 
            if (nx < 0 or nx >= h or ny < 0 or ny >= w) continue;
            if (grid[nx][ny] == '#') continue;
            if (!visited[nx][ny]) {
                score[nx][ny] = score[now_x][now_y] + 1;
                que.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }
 
    if (!visited[h-1][w-1]) cout << -1 << endl;
    else cout << h * w - cnt - score[h-1][w-1] << endl;
 
    return 0;
}
 