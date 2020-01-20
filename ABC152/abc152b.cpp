#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int a, b;
    cin >> a >> b;
    int tmp = min(a, b), tmp1 = max(a, b);

    for (int i = 0; i < tmp1; i++) cout << tmp;
    return 0;
}

