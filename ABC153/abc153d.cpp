#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    ll h, sum=0, cnt = 1;
    cin >> h;
    while (h) {
        h /= 2;
        sum += cnt;
        cnt *= 2;
    }
    cout << sum << endl;
    return 0;
}

