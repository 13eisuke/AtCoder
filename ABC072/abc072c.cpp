#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int n, tmp, ans = -1;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
    }

    for (int i = 1; i <= 1e5-1; i++) {
        chmax(ans, a[i-1] + a[i] + a[i+1]);
    }
    cout << ans << endl;
    
    return 0;
}