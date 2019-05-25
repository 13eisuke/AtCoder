#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, cnt = 0, tmp;
    ll ans = 0;
    pair <ll, ll> a[200000];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = 1;
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i+n].second >> a[i+n].first;
    }
    sort(a, a+n+m);

    ll num = n;
    for (int i = n+m-1; i >= 0; i--) {
        if (num > a[i].second) {
            ans += a[i].first * a[i].second;
			num -= a[i].second;
        }
        else {
            ans += a[i].first * num;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
