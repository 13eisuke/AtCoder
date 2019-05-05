#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
#include<queue>

typedef long long ll;
using namespace std;

int main()
{
    int H, W;
    int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
    cin >> H >> W;
    char A[1000][1000];
    queue < pair<int,int> > q;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            if (A[i][j] == '#') q.push(make_pair(i, j));
        }
    }
    int ans = 0;
    while (!q.empty()) {
        int tmp =  q.size();
        queue < pair<int, int> > nq;
        for (int i = 0; i < tmp; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int j = 0; j < 4; j++) {
                int px = x + dx[j];
                int py = y + dy[j];
                if (px < 0 || px >= H || py < 0 || py >= W) continue;
                if (A[px][py] == '.'){
                    nq.push(make_pair(px, py));
                    A[px][py] = '#';
                }
            }
        }
        if (nq.empty()) break;
        q = nq;
        ans++;
    }

    cout << ans << endl;


    return 0;
}