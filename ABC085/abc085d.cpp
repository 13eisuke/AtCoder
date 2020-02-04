#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int n, h, ans = 0;
    cin >> n >> h;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int tmp = 0;
    for (int i = n-1; a[n-1] < b[i]; i--) {
        tmp += b[i];
        ans++;
        if (tmp >= h) {
            cout << ans << endl;
            return 0;
        }
    }

    ans += ((h - tmp - 1) / a[n-1]) + 1;
    cout << ans << endl;

	return 0;
}
