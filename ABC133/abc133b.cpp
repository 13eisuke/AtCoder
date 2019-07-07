#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, D, cnt = 0, ans = 0;
    cin >> N >> D;
    int X[10][10];
    vector <int> b;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }

    while (1) {
        if (cnt*cnt > 10 * 1600) break;
        b.push_back(cnt*cnt);
        cnt++;
    }


    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            cnt = 0;
            for (int k = 0; k < D; k++) {
                int x = X[i][k] - X[j][k];
                cnt += x * x;
            }
            for (int l = 0; l < b.size(); l++) {
                if (cnt == b[l]) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
