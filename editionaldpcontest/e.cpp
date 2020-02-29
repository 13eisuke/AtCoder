#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll dp[110][100100] = {};

int main()
{
    int N, W;
    cin >> N >> W;

    for (int i = 0; i < 110; i++) {
        for (int j = 0; j < 100100; j++) {
            dp[i][j] = inf;
        }
    }

    ll w[N], v[N];
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];
    //for (int i = 0; i < N; i++) cout << w[i] << v[i] << endl;

    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 100100; j++) {
            if (j >= v[i]) {
                //cout << dp[i][j-w[i]] << endl;
                chmin(dp[i+1][j], dp[i][j-v[i]] + w[i]);
                //cout << dp[i+1][j] << endl;
            }
            chmin(dp[i+1][j], dp[i][j]);
            //cout << dp[i+1][j] << endl;
        }
    }
    ll ans = 0;
    for (int i = 0; i < 100100; i++) {
        //cout << dp[N][i] << endl;
        if (dp[N][i] <= W) ans = i;
    }
    
    cout << ans << endl;
    return 0;
}

