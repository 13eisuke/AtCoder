#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<int, int> P;
int dp[1000+1][10000+1];
int main()
{
    int h, n;
    cin >> h >> n;
    vector <P> tmp(n);
    for (int i = 0; i < n; i++) {
        cin >> tmp[i].first >> tmp[i].second;
    }
    sort(tmp.begin(), tmp.end());
    for (int i = 1; i <= h; i++) {
        dp[0][i] = ((i-1)/tmp[0].first + 1) * tmp[0].second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= h; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j - tmp[i].first] + tmp[i].second);
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= h; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << dp[n-1][h] << endl;
    return 0;
}

