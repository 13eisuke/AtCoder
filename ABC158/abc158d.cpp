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
    int q;
    cin >> q;
    int x, f;

    string bef, aft;
    char c;
    int ok = 1;

    for (int i = 0; i < q; i++) {
        cin >> x;
        if (x == 1) ok = 1 - ok;
        if (x == 2) {
            cin >> f >> c;
            if (ok) {
                if (f == 1) bef = c + bef;
                if (f == 2) aft = aft + c;
            } else {
                if (f == 1) aft = aft + c;
                if (f == 2) bef = c + bef;
            }
        }
    }
    string tmp = bef + s + aft; 
    if (ok) cout << tmp << endl;
    else {
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    return 0;
}

