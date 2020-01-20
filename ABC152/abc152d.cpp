#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int n, k, ans = 0, s;
    cin >> n;
    int tmp[10][10] = {0};

    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x) {
            s = x%10;
            x /= 10;
        }
        tmp[s][i%10]++;
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ans += tmp[i][j] * tmp[j][i];
        }
    }
    cout << ans << endl;
    return 0;
}

