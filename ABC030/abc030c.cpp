#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string s;
    cin >> s;

    int ans = 0;
    bool has_zero = false;

    for (int i = 0; i < s.size(); i++) {
        if (i%2) {
            if (s[i] == '*') continue;
            else {
                if (!has_zero) ans++;
                has_zero = false;
            }
        } else {
            if (s[i] == '0') has_zero = true;
        }
    }

    if (!has_zero) ans++;

    cout << ans << endl;
    return 0;
}

