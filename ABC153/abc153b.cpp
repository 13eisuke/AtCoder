#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int h, n;
    int tmp, sum = 0;
    cin >> h >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        sum += tmp;
    }
    if (sum >= h) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

