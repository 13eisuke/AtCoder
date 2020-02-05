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
    vector <int> c(n), s(n), f(n);
    for (int i = 0; i < n-1; i++) cin >> c[i] >> s[i] >> f[i];

    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = i; j < n-1; j++) {
            if (t < s[j]) t = s[j];
            else if (t % f[j] == 0);
            else t += f[j] - (t%f[j]);
            t += c[j];
        }
        cout << t << endl;
    }
	return 0;
}
