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
    int n, y;
    cin >> n >> y;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i + j > n) continue;
            int tmp = n - i - j;
            if (10000*i + 5000*j + 1000*tmp == y) {
                cout << i << " " << j << " " << tmp << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
	return 0;
}
