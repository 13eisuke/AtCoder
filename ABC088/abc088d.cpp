#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> Pll;
typedef pair<int, int> Pii;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int h, w;
    cin >> h >> w;
    char grid[h][w];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    
    vector < vector <int>> dist(h, vector<int>(w, -1));
    dist[0][0] = 0;

    int prev_x[h][w], prev_y[h][w];
    prev_x[0][0] = prev_y[0][0] = -1;

    queue<Pii> que;
    que.push(make_pair(0,0));
    
    while (!que.empty()) {
        Pii now = que.front();
        que.pop();

        int x = now.first;
        int y = now.second;
        //cout << x << " " << y << endl;
        for (int i = 0; i < 4; i++) {
            int n_x = x + dx[i];
            int n_y = y + dy[i];
            if (n_x < 0 or n_x >= h or n_y < 0 or n_y >= w) continue;
            if (grid[n_x][n_y] == '#') continue;
            if (dist[n_x][n_y] == -1) {
                que.push(make_pair(n_x, n_y));
                dist[n_x][n_y] = dist[x][y] + 1;
                prev_x[n_x][n_y] = x;
                prev_y[n_x][n_y] = y;
            }
        }
    }
    
    if (dist[h-1][w-1] == -1) {
        cout << -1 << endl;
        return 0;
    }

    int x = h-1, y = w-1;

    while (x != -1 and y != -1) {
        grid[x][y] = 'x';
        int tmp_x = prev_x[x][y];
        int tmp_y = prev_y[x][y];
        x = tmp_x;
        y = tmp_y;
        //cout <<x << " " << y << endl;
    }
    //cout << x << y << endl;
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            //cout << "yes"<< endl;
            if (grid[i][j] == '.') ans++;
        }
    }
    cout << ans << endl;
    
	return 0;
}
