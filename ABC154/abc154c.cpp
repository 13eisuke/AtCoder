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
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;  i< n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int tmp = a[0];
    for (int i = 1; i < n; i++) {
        if (tmp == a[i]) {
            cout <<"NO" << endl;
            return 0;
        } else {
            tmp = a[i];
        }
    }
    cout << "YES" << endl;
    return 0;
}

