#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int n;
    cin >> n;
    ll cnt = 0, tmp = inf, k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (tmp > k) {
            tmp = k;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

