#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    int now = 1;
    while (now < b) {
        now -= 1;
        now += a;
        ans++;
    }
    cout << ans << endl;   
    return 0;
}