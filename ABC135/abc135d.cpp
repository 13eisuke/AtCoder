#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int dp[100001][13];

signed main()
{
    string s;
    cin >> s;
    
    int n = s.size();

    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 13; j++) {
            if (s[i] == '?') {
                for (int k = 0; k < 10; k++) (dp[i+1][(10*j+k)%13] += dp[i][j]) %= MOD;
            } else {
                int k = s[i] - '0';
                (dp[i+1][(10*j+k)%13] += dp[i][j]) %= MOD;
            }
        }
    }
    cout << dp[n][5] << endl;

    return 0;
}
