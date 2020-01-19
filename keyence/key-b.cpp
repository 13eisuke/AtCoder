#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;
typedef pair<ll, ll> P;
int main()
{
    ll n, x, l, sum = 0;
    cin >> n;
    vector<P> arm;
    for (int i = 0; i < n; i++) {
        cin >> x >> l;
        arm.push_back(make_pair(x+l, max(ll(0), x-l)));
    }
    sort(arm.begin(), arm.end());

    ll now = -inf;
    for (int i = 0; i < n; i++) {
        if (now <= arm[i].second) {
            sum++;
            now = arm[i].first;
        }
    }
    cout << sum << endl;

    return 0;
}

