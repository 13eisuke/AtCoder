#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;

    ll tmp_a, tmp_b;
    
    if (a == 0 and b == 0) cout << 1 << endl;
    else if (a == 0) {
        cout << b/x + 1 << endl;
    }
    else {
        cout << b/x - (a-1)/x << endl;
    }
    return 0;
}

