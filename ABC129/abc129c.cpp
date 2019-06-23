#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main() {
    int n, m;
    cin >> n >> m;
    vector <int>  ok(n + 1, 1);
    
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        ok[a] = 0;
    }
    
    vector <ll> dp(n + 2);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        if (!ok[i]) dp[i] = 0;
        (dp[i + 1] += dp[i]) %= MOD;
        (dp[i + 2] += dp[i]) %= MOD;
    }
    cout << dp[n] << endl;
    return 0;
}
