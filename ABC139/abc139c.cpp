#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n;
    cin >> n;
    vector <ll> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    int ans = 0, c = 0;
    for (int i = n-2; i >= 0; i--) {
        if (h[i] >= h[i+1]) c++;
        else c = 0;
        ans = max(ans, c);
    }
    cout << ans << endl;
    return 0;
}
