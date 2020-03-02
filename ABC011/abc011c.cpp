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
    int n, a[3];
    cin >> n >> a[0] >> a[1] >> a[2];

    if (n == a[0] or n == a[1] or n == a[2]) {
        cout << "NO" << endl;
        return 0;
    }
    int cnt = 0;
    for (int i = n; i > 0; ) {
        if (i - 3 != a[0] and i - 3 != a[1] and i - 3 != a[2]) {
            i -= 3;
            cnt++;
        } else if (i - 2 != a[0] and i - 2 != a[1] and i - 2 != a[2]) {
            i -= 2;
            cnt++;
        } else if (i - 1 != a[0] and i - 1 != a[1] and i - 1 != a[2]) {
            i -= 1;
            cnt++;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (cnt <= 100) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

