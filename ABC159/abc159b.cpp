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

    int tmp = int(s.size())-1;
    bool ok = true;

    for (int i = 0; i < tmp/2;  i++) {
        if (s[i] != s[tmp-i]) ok = false;
    }
    for (int i = 0; i < tmp/2/2; i++) {
        if (s[i] != s[tmp/2-1-i]) ok = false;
    }
    for (int i = 0; i < tmp/2/2; i++) {
        if (s[tmp/2+1+i] != s[tmp-i]) ok = false;
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

