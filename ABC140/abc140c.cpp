#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n;
    ll ans = 0;
    cin >> n;
    vector <int> a(n-1);
    for (int i = 0; i < n-1; i++) cin >> a[i];
    ans += a[0];
    for (int i = 1; i < n-1; i++) {
        ans += min(a[i-1], a[i]);
        //cout << ans << endl;
    }
    ans += a[n-2];
    cout << ans << endl;
    return 0;
}
