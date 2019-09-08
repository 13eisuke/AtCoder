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
    vector <int> a(n), b(n), c(n-1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n-1; i++) cin >> c[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += b[a[i]-1];
    }
    //cout << ans << endl;
    for (int i = 0; i < n-1; i++) {
        if (a[i] == (a[i+1] - 1)) ans += c[a[i]-1];
    }
    cout << ans << endl;
    return 0;
}
