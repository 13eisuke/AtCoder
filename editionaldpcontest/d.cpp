#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main()
{
    int N, W;
    cin >> N >> W;

    ll dp[N+1][W+1] = {};

    ll w[N], v[N];
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];
    //for (int i = 0; i < N; i++) cout << w[i] << v[i] << endl;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j >= w[i]) {
                //cout << dp[i][j-w[i]] << endl;
                chmax(dp[i+1][j], dp[i][j-w[i]] + v[i]);
                //cout << dp[i+1][j] << endl;
            }
            chmax(dp[i+1][j], dp[i][j]);
        }
    }
    /*
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */
    cout << dp[N][W] << endl;
    return 0;
}

