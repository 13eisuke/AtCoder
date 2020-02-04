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
    int n;
    cin >> n;
    vector <vector<int>> a(2);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) sum += a[0][j];
        for (int j = i; j < n; j++) sum += a[1][j];
        chmax(ans, sum);
    }
    cout << ans << endl;
	return 0;
}
