#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    
    return b ? gcd(b, a % b) : a;
};

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
};

int main()
{
    ll n, x, sum = 0;
    cin >> n;
    vector <ll> a(n);
    ll tmp;
    cin >> tmp;
    for (int i = 1; i < n; i++) {
        cin >> x;
        tmp = lcm(tmp, x);
    }
    tmp %= MOD;
    cout << tmp << endl;
    for (int i = 0; i < n; i++) {
        cout << sum << endl;
        sum += (tmp%MOD/a[i]%MOD);
    }
    cout << sum << endl;
    return 0;
}

