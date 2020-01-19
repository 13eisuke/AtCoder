#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int n, cnt = 0;
    ll sum = 0;
    cin >> n;
    vector <ll> a(n), b(n), t;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) continue;
        if (a[i] < b[i]) {
            sum += b[i] - a[i];
            cnt++;
        }
        else t.push_back(b[i] - a[i]);
    }
    sort(t.begin(), t.end());

    int i;
    for (i = 0; i < int(t.size()); i++) {
        if (sum > 0) sum += t[i];
        else break;
    }
    if (sum > 0) cout << -1 << endl;
    else cout << i + cnt << endl;
    return 0;
}
