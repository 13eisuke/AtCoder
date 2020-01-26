#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int n, k;
    ll sum = 0;
    cin >> n >> k;
    vector <int> a(n, 0);
    for (int i  = 0; i < n; i++) {
        cin >> a[i];
    }
    //cout << sum << endl;
    sort(a.begin(), a.end());
    for (int i = 0; i < max(n-k, 0); i++) {
        sum += a[i];
    }
    cout << sum << endl;


    return 0;
}

