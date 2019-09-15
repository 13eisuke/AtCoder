#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n, x, y, ans = 0;
    cin >> n;
    vector < pair<ll, ll> > r, b;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        r.push_back({x, y});
    }
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        b.push_back({x, y});
    }
    sort(r.rbegin(), r.rend());
    sort(all(b));

    for (int i = 0; i < n; i++) {
        ll ymax = -1, pos = -1;
        for (int j = 0; j < n; j++) {
            if ((r[j].first < b[i].first) && (r[j].second < b[i].second)) {
                if (ymax < r[j].second) {
                    ymax = r[j].second;
                    pos = j;
                }
            }
        }
        if (ymax == -1) continue;
        else {
            r[pos].first = inf;
            r[pos].second = inf;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
