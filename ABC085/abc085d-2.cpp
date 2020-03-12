#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    ll n, h, cnt = 0;
    cin >> n >> h;

    vector <ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int tmp = a[n-1], idx;

    for (int i = n-1; i >= 0; i--) {
        if (tmp <= b[i]) idx = i;
        else break;
    }

    for (int i = n-1; i >= idx; i--) {
        h -= b[i];
        cnt++;
        if (h <= 0) {
            cout << cnt << endl;
            return 0;
        }
    }

    cnt += (h-1) / a[n-1] + 1;

    cout << cnt << endl;
    return 0;
}

