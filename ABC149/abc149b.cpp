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
    ll a, b, k;
    cin >> a >> b >> k;

    ll tmp_a = max(a-k, ll(0));
    ll tmp_b = max(b-(k-(a-tmp_a)), ll(0));

    cout << tmp_a << " " <<  tmp_b << endl;
    return 0;
}

