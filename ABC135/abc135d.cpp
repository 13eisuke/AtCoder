#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

typedef long long ll;
// dp[i][j] := 先頭 i 文字として考えられるもののうち，13 で割ったあまりが j であるものの数
int main()
{
    string s;
    cin >> s;
    int dp[100005][13];
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
    /*
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 13; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << dp[n][5] << endl;

    return 0;
}
