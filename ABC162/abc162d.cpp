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
    
    int n;
    string s;
    cin >> n;
    cin >> s;

    ll ans = 0;

    vector<int> red, gre, blu;
    vector <bool> r(4000, false), g(4000, false), b(4000, false);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            r[i] = true;
            red.push_back(i);
        }
        if (s[i] == 'G') {
            g[i] = true;
            gre.push_back(i);
        }
        if (s[i] == 'B') {
            b[i] = true;
            blu.push_back(i);
        }
    }
    ans = red.size() * gre.size() * blu.size();

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (s[i] == s[j]) continue;
            if (s[i] == 'R') {
                if (s[j] == 'G') {
                    if (j + j - i < n and s[j+j-i] == 'B') ans--;
                }
                if (s[j] == 'B') {
                    if (j + j - i < n and s[j+j-i] == 'G') ans--;
                }
            }
            if (s[i] == 'G') {
                if (s[j] == 'R') {
                    if (j + j - i < n and s[j+j-i] == 'B') ans--;
                }
                if (s[j] == 'B') {
                    if (j + j - i < n and s[j+j-i] == 'R') ans--;
                }
            }
            if (s[i] == 'B') {
                if (s[j] == 'G') {
                    if (j + j - i < n and s[j+j-i] == 'R') ans--;
                }
                if (s[j] == 'R') {
                    if (j + j - i < n and s[j+j-i] == 'G') ans--;
                }
            }            
        }
    }

    cout << ans << endl;

    return 0;
}

