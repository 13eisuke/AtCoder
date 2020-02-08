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
    string s, t;
    cin >> s >> t;

    if (int(s.size()) < int(t.size())) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    bool tmp;
    int i;
    for (i = int(s.size()) - int(t.size()) ; i >= 0; i--) {
        tmp = true;
        for (int j = 0; j < int(t.size()); j++) {
            if (s[i+j] != t[j] and s[i+j] != '?') tmp = false;
        }
        if (tmp) {
            for (int j = 0; j < int(t.size()); j++) s[i+j] = t[j];
            break;
        }
    }

    if (!tmp) {
        cout << "UNRESTORABLE" << endl;
        return 0;        
    }

    for (int i = 0; i < int(s.size()); i++) {
        if (s[i] == '?') s[i] = 'a';
    }
    cout << s << endl;
    return 0;
}

