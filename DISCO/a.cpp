#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;


int main()
{
    int x, y, ans = 0;
    cin >> x >> y;

    if (x == 1) ans += 300000;
    if (y == 1) ans += 300000;
    if (x == 2) ans += 200000;
    if (y == 2) ans += 200000;
    if (x == 3) ans += 100000;
    if (y == 3) ans += 100000;

    if (x == 1 and y == 1) ans += 400000;

    cout << ans << endl;
    return 0;
}

