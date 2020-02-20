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
    int n, ans = 0;
    cin >> n;
    vector <int> a(n+1);
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == i+1 and a[i+1] == i+2) {
            ans++;
            i++;
        }
        else if (a[i] == i+1) ans++; 
    }

    cout << ans << endl;
    
    return 0;
}