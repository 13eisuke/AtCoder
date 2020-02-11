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
    ll n, k;
    cin >> n >> k;
    vector <P> x(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i].first >> x[i].second;
    }

    sort(x.begin(), x.end());
    ll now = 0;

    for (int i = 0; i < n; i++) {
        if (now < k) now += x[i].second;
        if (now >= k) {
            cout << x[i].first << endl;
            break;
        }
    }
    return 0;
}

