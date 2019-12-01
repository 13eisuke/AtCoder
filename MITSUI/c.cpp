#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int dp[100000+1];


int main()
{    
    memset(dp, -1, sizeof(dp));
    int x, a[6]={100, 101, 102, 103, 104, 105};
    cin >> x;

    dp[0] = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= x; j++) {
            if (dp[j] >= 0) dp[j] = 1000000;
            else if (j < a[i] || dp[j - a[i]] <= 0) dp[j] = -1;
            else dp[j] = dp[j - a[i]] - 1;
        }
    }
    if (dp[x] >= 0) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}

