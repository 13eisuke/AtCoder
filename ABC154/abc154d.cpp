#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int n, k;
    cin >> n >> k;
    vector <double> p(n), x(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    vector <double> s(1001, 0);
    s[1] = 1.0;
    for (double i = 2; i <= 1000; i++) {
        s[i] = s[i-1] + i;
        //cout << i << " " << s[i] << endl;
    }
    double ans = 0;
    for (int i = 0; i < n; i++) {
        x[i] = s[p[i]] / p[i];
    }
    double tmp = 0;
    for (int i = 0; i < k; i++) {
        ans += x[i];
    }
    tmp = ans;
    for (int i = 0; i < n-k; i++) {
        tmp += x[i+k] - x[i];
        chmax(ans, tmp);
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}

