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
    string s;
    cin >> s;
    
    int n = int(s.size()) - 1;
    ll ans = 0;

    for (int bit = 0; bit < (1<<n); bit++) {
        ll now = int(s[0] - '0');
        for (int j = 0; j < n; j++) {
            if ((bit >> j) & 1) {
                //cout << j << endl;
                ans += now;
                now = int(s[j+1] - '0');
            } 
            else {
                now *= 10;
                now += int(s[j+1] - '0');
            }
            
        }
        ans += now;
        //cout << ans << endl;
    }

    cout << ans << endl;
    return 0;
}

