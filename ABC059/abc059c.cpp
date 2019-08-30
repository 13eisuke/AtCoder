#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll m = inf, sum;
    for (int i = -100; i <= 100; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) sum += (i-a[j])*(i-a[j]);
        m = min(m, sum);
    }
    cout << m << endl;
    return 0;
}
