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
    bool ok = true;
    if (s.size() % 2) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < int(s.size()) - 1; i+=2) {
        if (!(s[i] == 'h' and s[i+1] == 'i')) ok = false;
    }
    if (ok) cout <<"Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

