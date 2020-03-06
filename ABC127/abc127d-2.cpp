#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n, m;
    cin >> n >> m;
    vector < pair<ll, ll> > a(n+m);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = 1;
    }

    for (int i = n; i < n+m; i++) {
        cin >> a[i].second >> a[i].first;
    }

    sort(a.begin(), a.end());
    //cout << "----" << endl;
    //for (int i = 0; i < n+m; i++) cout << a[i].first << " " <<  a[i].second << endl;
    //cout << "----" << endl;

    ll ans = 0;
    ll now = n;
    for (int i = n+m-1; i >= 0; i--) {
        //cout << a[i].first << " " <<  a[i].second << endl;
        if (now >= a[i].second) {
            ans += a[i].first * a[i].second;
            now -= a[i].second;
        }
        else  {
            ans += now * a[i].first;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
